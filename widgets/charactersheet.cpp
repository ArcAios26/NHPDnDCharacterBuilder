#include "charactersheet.h"
#include "utils.h"

CharacterSheet::CharacterSheet(QWidget *parent) :
    QWidget(parent), bkgnd(new QPixmap(":/Background/images/character.png")), lblName(new QLabel(this)), lblClass(new QLabel(this)), lblBackground(new QLabel(this)),
    lblPlayer(new QLabel(this)), lblRace(new QLabel(this)), lblAlignment(new QLabel(this)), lblExperience(new QLabel(this))
{
    //set sheet size
    setFixedSize(1275,1650);

    //setup Labels
    setupNameLabel();
    setupClassBlock();
}

CharacterSheet::~CharacterSheet()
{
    delete bkgnd;
}

void CharacterSheet::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);

    QPainter painter(this);
    auto width = this->width();
    auto height = this->height();
    painter.drawPixmap(0, 0, width, height, *bkgnd);
}

void CharacterSheet::setupNameLabel()
{
    lblName->setGeometry(91, 125, 351, 50);
    lblName->setFont(setupFont(lblName->font(), true, 14));
    lblName->setAlignment(Qt::AlignCenter);
    lblName->setWordWrap(true);

    lblName->setText("Eliela Taeverti the Black Lord of the Ravens");
}

void CharacterSheet::setupClassBlock()
{
    QFont font = setupFont(lblClass->font(), false, 12);

    lblClass->setGeometry(563, 92, 234, 39);
    lblBackground->setGeometry(799, 92, 200, 39);
    lblPlayer->setGeometry(1001, 92, 182, 39);
    lblRace->setGeometry(563, 147, 234, 39);
    lblAlignment->setGeometry(799, 147, 200, 39);
    lblExperience->setGeometry(1001, 147, 200, 39);

    lblClass->setFont(font);
    lblBackground->setFont(font);
    lblPlayer->setFont(font);
    lblRace->setFont(font);
    lblAlignment->setFont(font);
    lblExperience->setFont(font);

    lblClass->setWordWrap(true);

    lblClass->setText("Cleric 3 / Wizard 2 / Fighter 5 / Paladin 2");
    lblBackground->setText("Priest");
    lblPlayer->setText("Gary Brickhouse");
    lblRace->setText("Elf");
    lblAlignment->setText("Chaotic Neutral");
    lblExperience->setText("100,000,000");
}

