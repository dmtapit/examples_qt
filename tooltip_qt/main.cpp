#include "mainwindow.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    QWidget window;

    window.resize(250, 150);
    window.move(300, 300);
    window.setWindowTitle("ToolTip");
    // We set a tooltip for the QWidget widget with the setToolTop() method
    window.setToolTip("QWidget");
    window.show();

    return a.exec();
}
