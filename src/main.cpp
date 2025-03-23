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
 * This is the entry point of the program.
 */

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}