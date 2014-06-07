#include <QtGui/QGuiApplication>
#include <QGuiApplication>
#include <QQuickView>
#include <QtQml/qqmlcontext.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQuickView view;

    const QString qmlFilePath= QString::fromLatin1("%1/%2").arg(QCoreApplication::applicationDirPath(), "main.qml");
    view.setSource(QUrl::fromLocalFile(qmlFilePath));

    view.show();

    return app.exec();
}
