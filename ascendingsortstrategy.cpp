#include "ascendingsortstrategy.h"

AscendingSortStrategy::AscendingSortStrategy()
{

}

void AscendingSortStrategy::sort(QStringListModel *model)
{
    model->sort(0, Qt::AscendingOrder);
}
