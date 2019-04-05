//
// Created by parallels on 4/1/19.
//

#ifndef SCRABBLE_DRAGGABLERECTITEM_H
#define SCRABBLE_DRAGGABLERECTITEM_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>


class DraggableRectItem : public QGraphicsRectItem {

public:
    QPointF anchorPoint;
    QString letter;
    DraggableRectItem(QGraphicsRectItem* parent = 0);
    void setAnchorPoint(const QPointF& anchorPoint);

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:
    bool m_dragged;
};


#endif //SCRABBLE_DRAGGABLERECTITEM_H
