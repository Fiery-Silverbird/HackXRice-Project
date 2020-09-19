#include "birdsbudgeting.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BirdsBudgeting w;
    w.show();
    return a.exec();
}
