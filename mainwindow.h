#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "widgets/charactersheet.h"
#include "widgets/detailssheet.h"
#include "widgets/spellsheet.h"
#include "widgets/aspectratiowidget.h"

#include <QMainWindow>
#include <QScrollArea>
#include <QBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

private:
    CharacterSheet *charPage;
    DetailsSheet *detailsPage;
    SpellSheet *spellPage;
    QTabWidget *charSheetPages;

signals:

};

#endif // MAINWINDOW_H
