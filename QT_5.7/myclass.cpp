#include "myclass.h"

MyClass::MyClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);//now I do something
}

MyClass::~MyClass()
{

}
