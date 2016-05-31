#include "descendingsortstrategy.h"

DescendingSortStrategy::DescendingSortStrategy()
{

}

void DescendingSortStrategy::sort(QStringListModel *model)
{
    model->sort(0, Qt::DescendingOrder);
}
