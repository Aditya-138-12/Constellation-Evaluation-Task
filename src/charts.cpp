/**
 * @file charts.cpp
 * @brief Implementation of the Charts class
 */
#include "charts.h"
#include <QPainter>

/**
 * @brief Constructor for Charts
 * 
 * Initializes a bar chart with an initial value of 0
 * @param title Title of the chart
 */
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

/**
 * @brief Destructor for Charts
 * 
 * Qt will automatically handle object destruction or more formally memory cleanup
 */
Charts::~Charts(){
    // Will be automatically handled by Qt
}

/**
 * @brief Updates the bar chart with a new value
 * 
 * Replaces the existing the value and adjusts the Y-axis range dynamically
 * @param value New Value to update the chart with
 */
void Charts::updateValue(int value){
    barSet->replace(0, value);
    if(value > axisY->max()){
        axisY->setMax(value + 5);
    }
}