#ifndef DIALOG_H
#define DIALOG_H

#include "strategy.h"
#include "ascendingsortstrategy.h"
#include "descendingsortstrategy.h"
#include <QtCore>
#include <QtGui>
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QStringListModel *model;
    QStringListModel *sortingStrategyTypes;
    SortStrategy *sortStrategy;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
