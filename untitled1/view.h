#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QPainter>
#include <QMouseEvent>
class View : public QGraphicsView
{
Q_OBJECT
protected:
    void mouseMoveEvent(QMouseEvent*event);

    void mousePressEvent(QMouseEvent*event);
public:
  View(QWidget *parent = 0);
signals:
  void mouseMovePoint(QPoint point);

  void mousePressPoint(QPoint point);
};

#endif // VIEW_H
