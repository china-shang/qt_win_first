#include "myclass.h"
#include <QtWidgets/QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass w;
    QPushButton *button = new QPushButton("quit", &w);
    //other thing
    w.show();
    QObject:: connect(button,&QPushButton::pressed,&QApplication::quit);
    return a.exec();
}
