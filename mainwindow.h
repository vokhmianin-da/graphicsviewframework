#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include "blockscheme.h"
#include <QContextMenuEvent>
#include <QGraphicsSceneMouseEvent>

class MainWindow : public QGraphicsView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
//    QGraphicsView *view;
    QGraphicsScene *scence;
    BlockScheme *bscheme, *bscheme1;
protected:
private slots:
    void reDraw();
    void randomColorF();
    void randomColorAll();
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent  *event);
};

#endif // MAINWINDOW_H
