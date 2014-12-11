#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "receiver.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    Receiver receiver;

    QQmlContext* ctx = engine.rootContext();
    ctx->setContextProperty("receiver", &receiver);
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    receiver.sendToQml(43);

    return app.exec();
}
