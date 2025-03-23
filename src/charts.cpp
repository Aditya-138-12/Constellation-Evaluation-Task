#include "charts.h"
#include <QPainter>

Charts::Charts(const QString &title){
    chart = new QChart();
    chart->setTitle(title);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    
    // Create bar set and series
    barSet = new QBarSet("Values");
    *barSet << 0;  // Initial value
    
    series = new QBarSeries();
    series->append(barSet);
    chart->addSeries(series);
    
    // Setup axes
    QStringList categories;
    categories << "Value";
    
    axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    
    axisY = new QValueAxis();
    axisY->setRange(0, 10);  // Initial range
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    
    // Create chart view
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

}

Charts::~Charts(){
    // Will be automatically handled by Qt
}

void Charts::updateValue(int value){
    barSet->replace(0, value);
    if(value > axisY->max()){
        axisY->setMax(value + 5);
    }
}