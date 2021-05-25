#include "spellsheet.h"

SpellSheet::SpellSheet(QWidget *parent) : QWidget(parent), bkgnd(new QPixmap(":/Background/images/spells.png"))
{
    //set sheet size
    setFixedSize(1275,1650);

}

SpellSheet::~SpellSheet()
{
    delete bkgnd;
}

void SpellSheet::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);

    QPainter painter(this);
    auto width = this->width();
    auto height = this->height();
    painter.drawPixmap(0, 0, width, height, *bkgnd);
}
