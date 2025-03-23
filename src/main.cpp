#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include "mainWindow.h"
#include <QtCharts/QChartView>


/**
 * @brief Main Function
 * 
 * This is the entry point of the program.
 */

// class MainWindow : public QMainWindow{
//     Q_OBJECT
// private:
//     QLabel *label;
//     int number = 0;

// public:
//     MainWindow(){
//         setWindowTitle("QT + Meson Dynamic Bar Chart");
//         resize(800, 800);

//         label = new QLabel(QString::number(number), this);
//         label->setAlignment(Qt::AlignCenter);
//         label->setStyleSheet("font-size:24px;");

//         QPushButton *button = new QPushButton("Clik me", this);
//         connect(button, &QPushButton::clicked, this, &MainWindow::increaseNubmber);
//         button->setGeometry(350, 760, 100, 40);
//     }
// private slots:
//     void increaseNubmber(){
//         number++;
//         label->setText(QString::number(number));
//     }
// };

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}