project('qt_constelation_demo', 'cpp', default_options : ['cpp_std=c++20'])

qt5 = import('qt5', required: false)
qt6 = import('qt6', required: false)

qt_ver = 'qt5'

if not qt6.found() and qt6.found() 
    qt_ver = 'qt6'
endif

# Explicitly list all required Qt modules
qt_dep = dependency(qt_ver, modules: ['Core', 'Gui', 'Widgets', 'Charts'])


# Add compiler arguments to ensure Charts is recognized
add_project_arguments('-DQT_CHARTS_LIB', language: 'cpp')

moc_files = qt5.preprocess(
    moc_headers : ['src/mainWindow.h'],
    # Make sure to include Charts in the moc dependencies
    dependencies: qt_dep
)

executable('exe', 
    ['src/main.cpp', 'src/mainWindow.cpp', 'src/charts.cpp', moc_files],
    dependencies: qt_dep
)