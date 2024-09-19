#include "mainwindow.h"

#include <QApplication>
#include<QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
  /*  QLabel *label1= new QLabel();
    label1->setText("Hello World QT");
    label1->setWindowTitle("Hello CSMJMU");
    label1->show();   */
    return a.exec();
}
