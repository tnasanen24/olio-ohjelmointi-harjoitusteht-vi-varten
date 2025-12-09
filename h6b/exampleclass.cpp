#include "exampleclass.h"

ExampleClass::ExampleClass() {
    qDebug("Start");
    QObject::connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
    qDebug("End");
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug("Terve");
}
