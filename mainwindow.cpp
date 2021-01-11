#include "mainwindow.h"
#include <QMessageBox>
#include <QLocale>

MainWindow::MainWindow(QWidget *parent)
    : QGraphicsView(parent)
{    
    //srand(clock());
    scence = new QGraphicsScene(this);
    setScene(scence);
    MouseFilter *ptrFilter = new MouseFilter;
    installEventFilter(ptrFilter);
//    bscheme = new BlockScheme(this);
//    scence->addItem(bscheme);
//    bscheme1 = new BlockScheme(this);
//    scence->addItem(bscheme1);
//    scence->addText("Hello!");

//    connect(bscheme, SIGNAL(reDraw()), this, SLOT(reDraw()));
//    connect(bscheme1, SIGNAL(reDraw()), this, SLOT(reDraw()));
//    connect(bscheme, SIGNAL(dblClick()), this, SLOT(randomColorF()));
//    connect(bscheme1, SIGNAL(dblClick()), this, SLOT(randomColorAll()));
}
MainWindow::~MainWindow()
{

}

void MainWindow::reDraw()
{
    scence->update();
    update();
}

void MainWindow::randomColorF()
{
    bscheme->setBrush(QBrush(QColor(rand() % 256, rand() % 256, rand() % 256)));
}
void MainWindow::randomColorAll()
{
    bscheme->setBrush(QBrush(QColor(rand() % 256, rand() % 256, rand() % 256)));
    bscheme1->setBrush(QBrush(QColor(rand() % 256, rand() % 256, rand() % 256)));
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
//        MouseFilter *ptrFilter = new MouseFilter;
        BlockScheme *ptr = new BlockScheme(this);
        ptr->setFlags(QGraphicsItem::ItemIsMovable);
//        ptr->installEventFilter(ptrFilter);
        scence->addItem(ptr);
    }
}


//void MainWindow::mousePressEvent(QGraphicsSceneMouseEvent *event)   //НЕ РАБОТАЕТ!!!!!!!!!!!!!!!!!!!!!
//{
//    if (event->button() == Qt::LeftButton)
//    {
//        BlockScheme *ptr = new BlockScheme(this);
//        scence->addItem(ptr);
//    }
//}

