# Qt Demo for Constellation GSoC-2025 Project: Extending the User Interface 
A simple `Qt` application built with `C++20` and the Meson build system, created as a warm-up exercise for the `CERN-HSF GSoC 2025 Constellation` project. This app features a bar chart that increases linearly when a button is pressed, showcasing clean code, solid documentation, and a modern build setup.

## Prerequisites ##
Qt 5, Meson, Ninja

## Introduction ##
This small Qt application has a bar chart, 2 buttons and a label.
The label keeps track of the current value in the bar chart.
The Increase Button, changes the bar chart dynamically increasing its value.
The Reset button resets the bar chart.

## Approach ##
I have not built this with the Qt Creator, but if needed I am comfortable with it too, Used the meson build system, and the documentation generated with the Doxygen, please see the docs [here](https://aditya-138-12.github.io/GSoC-2025-Constellation-Assignment/html/index.html), I have checked the Constellation, its documentation is in sphinx, right now i am comfortable in doxygen so i have used it, but in the future we can possibly use `sphinx` + `breathe` to generate the docs.

## Building and Running ##
1. Clone the Repository
```
git clone https://github.com/[your-username]/[your-repo-name].git
cd [your-repo-name]
```
2. Setup the build and compile
```
meson setup bin
ninja -C bin
```
3. Run
```
./bin/exe
```

## Documentation ##
Detailed code documentation is generated with Doxygen and hosted on GitHub Pages:[here](https://aditya-138-12.github.io/GSoC-2025-Constellation-Assignment/html/index.html)

## Project Structure ##
`main.cpp`: Entry point for the application.

`mainWindow.cpp` / `mainWindow.h`: Main window logic and UI setup.

`charts.cpp` / `charts.h`: Bar chart functionality.

`meson.build`: Meson build configuration.

## Screenshot ##
![Screenshot from 2025-03-23 14-23-27](https://github.com/user-attachments/assets/6ea9ff81-1d5c-49d6-b80e-f46f046b11a7)

## Video ##
[Screencast from 2025-03-23 14-27-09.webm](https://github.com/user-attachments/assets/1a36fc8b-d7c7-4f44-a446-695b7d68dfea)

