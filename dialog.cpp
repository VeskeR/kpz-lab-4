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
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // Create
}

void Dialog::on_pushButton_3_clicked()
{
    // Update
}

void Dialog::on_pushButton_2_clicked()
{
    // Delete
}

void Dialog::on_pushButton_4_clicked()
{
    // Sort
}
