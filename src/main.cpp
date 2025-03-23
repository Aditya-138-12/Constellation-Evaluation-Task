/** 
 * @mainpage Qt Demo for Constellation GSoC Project 2025
 *
 * Welcome to the documentation for **Demo Qt Application**.
 *
 * - Click on **Classes** to see the available C++ classes.
 * - Click on **Files** to explore the source code.
 *
 * @section intro Introduction
 * This project demonstrates a simple Qt application, in which we have button and a barchart, when the button is pressed the barchart increases linearly
 *
 * @section install Installation
 * 1. Make sure you have these libraries installed in your system `libqt5charts5` `libqt5charts5-dev`
 * 2. After this, run these commands
 * @code
 * meson setup bin
 * @endcode
 * @code
 * ninja -C bin
 * @endcode
 * 5. After this, there will be a executable file within the bin folder, all thanks to the super fast ninja backend
 * 6. Now, Finally run
 * @code
 * `./bin/exe`
 * @endcode
 */


/**
 * @file main.cpp
 * @brief Entry point of the application
 */
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include "mainWindow.h"
#include <QtCharts/QChartView>


/**
 * @brief Main Function
 * 
 * Initializes the QApplication and MainWindow.
 * 
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return int application exit status.
 */

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}