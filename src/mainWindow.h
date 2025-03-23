#pragma once
#include <QMainWindow>
#include <QLabel>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

private:
    QLabel *label;
    int number = 0;

    QChartView *chartView;
    QChart *chart;
    QBarSet *barSet;
    QBarSeries *series;
    QBarCategoryAxis *axisX;
    QValueAxis *axisY;

public:
    MainWindow();
    ~MainWindow();


private slots:
    void increaseNumber();
    void updateChart();
};