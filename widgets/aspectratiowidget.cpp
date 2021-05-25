#include "aspectratiowidget.h"

AspectRatioWidget::AspectRatioWidget(QWidget *widget, float width, float height, QWidget *parent) :
    QWidget(parent), arWidth(width), arHeight(height)
{
    layout = new QBoxLayout(QBoxLayout::LeftToRight, this);

    layout->addItem(new QSpacerItem(0,0));
    layout->addWidget(widget);
    layout->addItem(new QSpacerItem(0,0));
    layout->setContentsMargins(0, 0, 0, 0);
}

void AspectRatioWidget::resizeEvent(QResizeEvent *event)
{
    float thisAspectRatio = (float)event->size().width() / event->size().height();
    int widgetStretch, outerStretch;

    if (thisAspectRatio > (arWidth/arHeight))
    {
        layout->setDirection(QBoxLayout::LeftToRight);
        widgetStretch = height() * (arWidth/arHeight);
        outerStretch = (width() - widgetStretch) / 2 + 0.5;
    }
    else
    {
        layout->setDirection(QBoxLayout::TopToBottom);
        widgetStretch = width() * (arHeight/arWidth);
        outerStretch = (height() - widgetStretch) / 2 + 0.5;
    }

    layout->setStretch(0, outerStretch);
    layout->setStretch(1, widgetStretch);
    layout->setStretch(2, outerStretch);
}
