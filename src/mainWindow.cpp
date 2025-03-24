/**
 * @file mainWindow.cpp
 * @brief Implementation of the MainWindow class.
 */

#include "mainWindow.h"
#include "charts.h"
#include <QHBoxLayout>
#include <QPainter>
#include <QPushButton>
#include <QWidget>

/**
 * @brief Constructor for MainWindow
 *
 * Initializes the UI with a QLabel, QPushButton and a bar chart
 */

MainWindow::MainWindow() {
  setWindowTitle("QT + Meson Dynamic Bar Chart");
  resize(800, 800);

  QWidget *central = new QWidget();
  QVBoxLayout *mainLayout = new QVBoxLayout(central);

  label = new QLabel(QString::number(number), this);
  label->setAlignment(Qt::AlignCenter);
  label->setStyleSheet("font-size:24px;");

  QPushButton *button = new QPushButton("Increase", this);
  connect(button, &QPushButton::clicked, this, &MainWindow::increaseNumber);
  button->setGeometry(350, 760, 100, 40);

  QPushButton *reset = new QPushButton("Reset", this);
  connect(reset, &QPushButton::clicked, this, &MainWindow::reset);
  reset->setGeometry(450, 760, 100, 40);

  chart = new Charts("Dynamic Bar Chart");
  mainLayout->addWidget(chart->getChartView());
  mainLayout->addWidget(label);
  mainLayout->addWidget(button);
  mainLayout->addWidget(reset);
  setCentralWidget(central);
}

/**
 * @brief Destructor for MainWindow
 *
 * cleans up dynamically given resources
 */
MainWindow::~MainWindow() { delete chart; }

/**
 * @brief Increases the number and updates the chart
 */
void MainWindow::increaseNumber() {
  number++;
  label->setText(QString::number(number));
  chart->updateValue(number);
}

/**
 * @brief Sets the number to 0, updates the label, calls the chartReset()
 */
void MainWindow::reset() {
  number = 0;
  label->setText(QString::number(number));
  chart->chartReset();
}