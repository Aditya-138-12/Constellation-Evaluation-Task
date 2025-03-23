#pragma once
#include <QMainWindow>
#include <QLabel>
#include "charts.h"

class MainWindow : public QMainWindow{
    Q_OBJECT

private:
    QLabel *label;
    int number = 0;
    Charts *chart;

public:
    MainWindow();
    ~MainWindow();


private slots:
    void increaseNumber();
};