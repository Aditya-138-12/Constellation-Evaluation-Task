/**
 * @file mainWindow.h
 * @brief Decleration of the MainWindow class
 */
#pragma once
#include "charts.h"
#include <QLabel>
#include <QMainWindow>

/**
 * @class MainWindow
 * @brief The main application window
 *
 * This class creates a GUI with a chart, a label and a button
 * that uploads the chart and label on click.
 */

class MainWindow : public QMainWindow {
  Q_OBJECT

private:
  QLabel *label;  ///< Label to display numeric or int value
  int number = 0; ///< number displayed inside the label and which updates the
                  ///< chart(1D barchart)
  Charts *chart;  ///< Pointer to the chart object

public:
  /**
   * @brief Constructor for the MainWindow.
   */
  MainWindow();
  /**
   * @brief Destructor for the MainWindow.
   */
  ~MainWindow();

private slots:
  /**
   * @brief Previously this function was used to update the label, but now it
   * will also call the updateValue() function which is defined in the charts.h
   */
  void increaseNumber();

  /**
   * @brief This function is used to reset the bar chart, it basically sets the
   * number to 0 and class Charts::chartReset()
   */
  void reset();
};