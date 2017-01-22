#include "myclass.h"
#include <QtWidgets/QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass w;
    QPushButton *button = new QPushButton("quit", &w);
    w.show();
    return a.exec();
}
