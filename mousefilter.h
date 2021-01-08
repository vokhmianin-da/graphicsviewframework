#ifndef KEYFILTER_H
#define KEYFILTER_H

#include <QObject>
#include <QEvent>
#include "mainwindow.h"

class MainWindow;

class MouseFilter : public QObject
{
protected:
    virtual bool eventFilter(QObject *obj, QEvent *event);

public:
    explicit MouseFilter(QObject *parent = nullptr);
};

#endif // KEYFILTER_H
