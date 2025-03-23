# Qt Demo for Constellation GSoC-2025 Project: Extending the User Interface 

## Introduction ##
This small Qt application has a bar chart, 2 buttons and a label.
The label keeps track of the current value in the bar chart.
The Increase Button, changes the bar chart dynamically increasing its value.
The Reset button resets the bar chart.
---
## Approach 
I have not built this with the Qt Creator, but if needed I am comfortable with it too, Used the meson build system, and the documentation generated with the Doxygen, please see the docs [here](https://aditya-138-12.github.io/GSoC-2025-Constellation-Assignment/html/index.html), I have checked the Constellation, its documentation is in sphinx, right now i am comfortable in doxygen so i have used it, but in the future we can possibly use sphinx + breathe to generate the docs.
---
## Code Structure 
The main.cpp is entry point to the application, and the mainWindow.h / mainWindow.cpp handles the MainWindow classs, charts.h / charts.cpp handles the Charts Class.
