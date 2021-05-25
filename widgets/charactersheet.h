#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QWidget>
#include <QPainter>
#include <QLabel>

class CharacterSheet : public QWidget
{
    Q_OBJECT
public:
    explicit CharacterSheet(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

private:
    ~CharacterSheet();

    void setupNameLabel();
    void setupClassBlock();

    QPixmap *bkgnd;
    QLabel *lblName;
    QLabel *lblClass;
    QLabel *lblBackground;
    QLabel *lblPlayer;
    QLabel *lblRace;
    QLabel *lblAlignment;
    QLabel *lblExperience;

signals:

};

#endif // CHARACTERSHEET_H
