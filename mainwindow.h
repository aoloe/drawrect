#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QQuickView>

class MainWindow : public QQuickView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
