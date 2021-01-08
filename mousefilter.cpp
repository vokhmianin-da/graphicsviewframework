#include "mousefilter.h"
#include "blockscheme.h"


MouseFilter::MouseFilter(QObject *parent) : QObject(parent)
{

}

bool MouseFilter::eventFilter(QObject *obj, QEvent *event)
{
    QString tempStr = "BlockScheme";
    if(obj->objectName() == tempStr)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent *ptrEvent = static_cast<QMouseEvent*>(event);
            if (ptrEvent->button() == Qt::RightButton)
            {
                delete obj;
                return true;
            }
            else
            {
                return true;
            }
        }
    }
    return false;
//    if (event->type() == QEvent::MouseButtonPress)
//    {
//        MainWindow* ptrObj = static_cast<MainWindow*>(obj);
//        QMouseEvent* ptrEvent = static_cast<QMouseEvent*>(event);
//        //если не назначаем клавиши, то стандартная обработка события


//    }
//    return false;
}

