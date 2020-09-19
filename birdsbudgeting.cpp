#include "birdsbudgeting.h"
#include "ui_birdsbudgeting.h"
#include <QString>



BirdsBudgeting::BirdsBudgeting(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BirdsBudgeting)
{
    ui->setupUi(this);
}

BirdsBudgeting::~BirdsBudgeting()
{
    delete ui;
}


void BirdsBudgeting::on_Submit_clicked()
{
    QString revenueType, expenseType;
    double revenueAmount, expenseAmount;

    revenueType = ui->RevType->text();
    revenueAmount = ui->RevAmt->text().toDouble();
    expenseType = ui->ExpType->text();
    expenseAmount = ui->ExpAmt->text().toDouble();

    ui->output->setText("Type of revenue - " + revenueType);
    ui->output->append("Amount of revenue - " + QString::number(revenueAmount));
    ui->output->append("Type of expense - " + expenseType);
    ui->output->append("Amount of expenses - " + QString::number(expenseAmount));
    ui->output->append("\n");

    ui->output->append("Your total balance is - " + QString::number(revenueAmount - expenseAmount));

}
