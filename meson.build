# project('qt_constelation_demo', 'cpp', default_options : ['cpp_std=c++20'])

# qt5 = import('qt5')
# qt_dep = dependency('qt5', modules: ['Core', 'Gui', 'Widgets'])

# # Process the source file with MOC
# processed = qt5.preprocess(
#     moc_sources : 'src/main.cpp',
#     include_directories: include_directories('src'),
#     dependencies: qt_dep
# )

# executable('exe', 
#     ['src/main.cpp', processed],
#     dependencies: qt_dep,
#     include_directories: include_directories('src')
# )



# project('qt_constelation_demo', 'cpp', default_options : ['cpp_std=c++20'])

# qt5 = import('qt5')
# qt_dep = dependency('qt5', modules: ['Core', 'Gui', 'Widgets', 'Charts'])

# moc_files = qt5.preprocess(
#     moc_headers : ['src/mainWindow.h'],
#     dependencies: qt_dep
# )

# executable('exe', 
#     ['src/main.cpp', 'src/mainWindow.cpp', moc_files],
#     dependencies: qt_dep
# )

project('qt_constelation_demo', 'cpp', default_options : ['cpp_std=c++20'])

qt5 = import('qt5')

# Explicitly list all required Qt modules
qt_dep = dependency('qt5', modules: ['Core', 'Gui', 'Widgets', 'Charts'])

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