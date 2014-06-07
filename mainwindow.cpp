#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QQuickView(parent)
{
    // transparent background
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("background:transparent;");

    // no window decorations
    setWindowFlags(Qt::FramelessWindowHint);

    // set QML file
    setSource(QUrl("main.qml"));
}

MainWindow::~MainWindow()
{
}
