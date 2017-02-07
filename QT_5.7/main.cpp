#include "myclass.h"
#include <QtWidgets/QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass w;
    QPushButton *button = new QPushButton("quit", &w);
    w.show();
    QObject:: connect(button,&QPushButton::pressed,&QApplication::quit);
    //some thing
    return a.exec();
}
