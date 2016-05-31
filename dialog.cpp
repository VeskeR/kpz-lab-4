#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStringListModel(this);
    QStringList list;
    list << "First Item" << "Second Item" << "Third Item" << "I'm Original";

    model->setStringList(list);

    ui->listView->setModel(model);
    ui->cbModelExample->setModel(model);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);

    sortingStrategyTypes = new QStringListModel(this);
    QStringList strategyTypes;
    strategyTypes << "Ascending Order" << "Descending Order";

    sortingStrategyTypes->setStringList(strategyTypes);

    ui->cbStrategies->setModel(sortingStrategyTypes);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // Create
    int row = model->rowCount();
    model->insertRows(row, 1);

    QModelIndex index = model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void Dialog::on_pushButton_3_clicked()
{
    // Insert
    int row = ui->listView->currentIndex().row();
    model->insertRows(row, 1);

    QModelIndex index = model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void Dialog::on_pushButton_2_clicked()
{
    // Delete
    model->removeRows(ui->listView->currentIndex().row(), 1);
}

void Dialog::on_pushButton_4_clicked()
{
    // Sort
    QString s = ui->cbStrategies->currentText();
    if (s == "Ascending Order")
    {
        sortStrategy = new AscendingSortStrategy();
    }
    else
    {
        sortStrategy = new DescendingSortStrategy();
    }
    sortStrategy->sort(model);
}
