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