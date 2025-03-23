#pragma once
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE

class Charts{
private:
    QChartView *chartView;
    QChart *chart;
    QBarSet *barSet;
    QBarSeries *series;
    QBarCategoryAxis *axisX;
    QValueAxis *axisY;

public:
    Charts(const QString &title = "Dynamic Bar Chart");
    ~Charts();

    QChartView* getChartView() const {return chartView;}

    void updateValue(int value);
};