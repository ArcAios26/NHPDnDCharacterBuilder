#include "detailssheet.h"

DetailsSheet::DetailsSheet(QWidget *parent) : QWidget(parent), bkgnd(new QPixmap(":/Background/images/details.png"))
{
    //set sheet size
    setFixedSize(1275,1650);

}

DetailsSheet::~DetailsSheet()
{
    delete bkgnd;
}

void DetailsSheet::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);

    QPainter painter(this);
    auto width = this->width();
    auto height = this->height();
    painter.drawPixmap(0, 0, width, height, *bkgnd);
}
