#ifndef DESCENDINGSORTSTRATEGY_H
#define DESCENDINGSORTSTRATEGY_H

#include "strategy.h"
#include <QtCore>
#include <QtGui>

class DescendingSortStrategy: public SortStrategy
{
public:
    DescendingSortStrategy();
    virtual void sort(QStringListModel *model);
};

#endif // DESCENDINGSORTSTRATEGY_H
