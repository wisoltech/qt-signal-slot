#include "receiver.h"
#include <QDebug>

Receiver::Receiver(QObject *parent) :
    QObject(parent)
{
}

void Receiver::sendToCpp(int count) {
    qDebug() << "Sent from QML to C++" << count;
}
