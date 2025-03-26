project('qt_constelation_demo', 'cpp', default_options : ['cpp_std=c++20'])

qt5 = import('qt5', required: false)
qt6 = import('qt6', required: false)

qt_ver = ''
qt_dep = dependency('', required: false)
moc_processor = qt5

# First try Qt6
if qt6.found()
    qt_ver = 'qt6'
    qt_dep = dependency('qt6', modules: ['Core', 'Gui', 'Widgets', 'Charts'], required: false)
    moc_processor = qt6
endif

# If Qt6 not found, try Qt5
if not qt_dep.found()
    qt_ver = 'qt5'
    qt_dep = dependency('qt5', modules: ['Core', 'Gui', 'Widgets', 'Charts'], required: false)
    moc_processor = qt5
endif

if not qt_dep.found()
    error('Neither Qt5 or Qt6 could be found')
endif

# Add compiler arguments to ensure Charts is recognized
add_project_arguments('-DQT_CHARTS_LIB', language: 'cpp')

moc_files = moc_processor.preprocess(
    moc_headers : ['src/mainWindow.h'],
    dependencies: qt_dep
)

executable('exe', 
    ['src/main.cpp', 'src/mainWindow.cpp', 'src/charts.cpp', moc_files],
    dependencies: qt_dep
)

# This meson build file, First tries to detect qt6, and then immediately tries to find the qt_dep, if not found then immediately fall backs 
# to Qt5.