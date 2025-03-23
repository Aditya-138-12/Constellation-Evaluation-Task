#include "mainWindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>
#include <QPainter>

MainWindow::MainWindow(){
    setWindowTitle("QT + Meson Dynamic Bar Chart");
    resize(800, 800);

    // Create central widget and layout
    QWidget *central = new QWidget();  // Renamed to avoid conflict
    QVBoxLayout *mainLayout = new QVBoxLayout(central);  // Now defined in scope

    label = new QLabel(QString::number(number), this);
    label->setAlignment(Qt::AlignCenter);
    label->setStyleSheet("font-size:24px;");

    QPushButton *button = new QPushButton("Click Me", this);
    connect(button, &QPushButton::clicked, this, &MainWindow::increaseNumber);
    button->setGeometry(350, 760, 100, 40);

    // Create chart
    chart = new QChart();
    chart->setTitle("Dynamic Bar Chart");
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
    
    // Add widgets to layout
    mainLayout->addWidget(chartView);
    mainLayout->addWidget(label);
    mainLayout->addWidget(button);
    
    // Set the central widget
    setCentralWidget(central);  // Using the renamed variable
    
}

MainWindow::~MainWindow() {
    // Qt will handle deleting the child widgets automatically
}

void MainWindow::increaseNumber(){
    number++;
    label->setText(QString::number(number));
    updateChart();
}

void MainWindow::updateChart() {
    // Update bar set with new number
    barSet->replace(0, number);
    
    // Adjust Y axis range if needed
    if (number > axisY->max()) {
        axisY->setMax(number + 5);  // Keep some space at the top
    }
}