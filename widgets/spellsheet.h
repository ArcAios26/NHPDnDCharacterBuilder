#ifndef SPELLSHEET_H
#define SPELLSHEET_H

#include <QWidget>
#include <QPainter>

class SpellSheet : public QWidget
{
    Q_OBJECT
public:
    SpellSheet(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

private:
    ~SpellSheet();
    QPixmap *bkgnd;


signals:

};

#endif // SPELLSHEET_H
