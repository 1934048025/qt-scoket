#include "view.h"

void View::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point = event->pos();
    emit mouseMovePoint(point);

    QGraphicsView::mouseMoveEvent(event);
}

void View::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        QPoint point = event->pos();
        emit mousePressPoint(point);
    }
    QGraphicsView::mousePressEvent(event);
}

View::View(QWidget * parent)
    : QGraphicsView(parent)
{

}
