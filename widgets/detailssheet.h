#ifndef DETAILSSHEET_H
#define DETAILSSHEET_H

#include <QWidget>
#include <QPainter>

class DetailsSheet : public QWidget
{
    Q_OBJECT
public:
    DetailsSheet(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

private:
    ~DetailsSheet();
    QPixmap *bkgnd;

signals:

};

#endif // DETAILSSHEET_H
