#include "mainWindow.h"
#include "charts.h"
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

    chart = new Charts("Dynamic Bar Chart");
    mainLayout->addWidget(chart->getChartView());
    mainLayout->addWidget(label);
    mainLayout->addWidget(button);
    setCentralWidget(central);
    
}

MainWindow::~MainWindow() {
    delete chart;
}

void MainWindow::increaseNumber(){
    number++;
    label->setText(QString::number(number));
    chart->updateValue(number);
}