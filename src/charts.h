/**
 * @file charts.h
 * @brief Decleration of the Charts class
 */
#pragma once
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE

/**
 * @class Charts
 * @brief Handles the creation and updating of a dynamic bar chart
 */

class Charts{
private:
    QChartView *chartView;  ///< view to display the chart
    QChart *chart;  ///< Chart Object
    QBarSet *barSet;    ///< data set for the bar chart
    QBarSeries *series; ///< series containing data set
    QBarCategoryAxis *axisX;    ///< X-Axis for categories
    QValueAxis *axisY;  ///< Y-Axis for values

public:
    /**
     * @brief Constructor for Charts
     * @param title Title of the chart
     */
    Charts(const QString &title = "Dynamic Bar Chart");

    /**
     * @brief Destructor for Charts
     */
    ~Charts();

    /**
     * @brief Get the chart view.
     * @return Pointer to the QChartView
     */
    QChartView* getChartView() const {return chartView;}

    /**
     * @brief Updates the bar chart with new values
     * @param value New value to be added to the chart
     */
    void updateValue(int value);
};