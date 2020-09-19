#ifndef BIRDSBUDGETING_H
#define BIRDSBUDGETING_H

#include <QMainWindow>

#include <QLineEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class BirdsBudgeting; }
QT_END_NAMESPACE

class BirdsBudgeting : public QMainWindow
{
    Q_OBJECT

public:
    BirdsBudgeting(QWidget *parent = nullptr);
    ~BirdsBudgeting();


private slots:
    void on_Submit_clicked();

private:
    Ui::BirdsBudgeting *ui;
};
#endif // BIRDSBUDGETING_H
