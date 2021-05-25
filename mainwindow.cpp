#include "mainwindow.h"

MainWindow::MainWindow() :
    charPage(new CharacterSheet(this)), detailsPage(new DetailsSheet(this)), spellPage(new SpellSheet(this)), charSheetPages(new QTabWidget(this))
{
    QScrollArea *charScroll = new QScrollArea(this);
    QScrollArea *detailScroll = new QScrollArea(this);
    QScrollArea *spellScroll = new QScrollArea(this);

    charScroll->setWidget(charPage);
    charScroll->setMinimumSize(1295, 720);

    detailScroll->setWidget(detailsPage);
    detailScroll->setMinimumSize(1295, 720);

    spellScroll->setWidget(spellPage);
    spellScroll->setMinimumSize(1295, 720);

    charSheetPages->addTab(charScroll, "Character Sheet");
    charSheetPages->addTab(detailScroll, "Details Page");
    charSheetPages->addTab(spellScroll, "Spells Page");

    setCentralWidget(new AspectRatioWidget(charSheetPages, charPage->width(), charPage->height()));
}
