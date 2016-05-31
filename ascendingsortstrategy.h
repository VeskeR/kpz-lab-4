#ifndef ASCENDINGSORTSTRATEGY_H
#define ASCENDINGSORTSTRATEGY_H

#include "strategy.h"
#include <QtCore>
#include <QtGui>

class AscendingSortStrategy: public SortStrategy
{
public:
    AscendingSortStrategy();
    virtual void sort(QStringListModel *model);
};

#endif // ASCENDINGSORTSTRATEGY_H
