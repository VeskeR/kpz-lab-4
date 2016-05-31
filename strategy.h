#ifndef STRATEGY_H
#define STRATEGY_H

#include <QtCore>
#include <QtGui>

class SortStrategy
{
public:
    SortStrategy();
    virtual void sort(QStringListModel *model) = 0;
};

#endif // STRATEGY_H
