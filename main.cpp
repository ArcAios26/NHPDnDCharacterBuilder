#include "mainwindow.h"
#include "widgets/charactersheet.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //CharacterSheet w;
    w.show();
    return a.exec();
}
