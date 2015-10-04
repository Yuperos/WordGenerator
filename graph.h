#ifndef GRAPH_H
#define GRAPH_H

#include <QList>
#include <Qmap>
#include <QString>
#include <QColor>
#include <Qtime>
#include <qvector.h>

class GraphNode
{
    QString value;
    float x,y;
    int type;
    QColor color;
    QTime lastMoving;

public:
    GraphNode();
    GraphNode(float x, float y, QColor color, int type);

    moveNode(float dx2, float dy2);
};

class Graph
{
    QVector<QList<int> > matrix;
    QMap<QString, int> map;

public:

    Graph();
};

#endif // GRAPH_H
