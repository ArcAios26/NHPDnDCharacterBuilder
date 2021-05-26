#include "charactersheet.h"
#include "utils.h"

CharacterSheet::CharacterSheet(QWidget *parent) :
    QWidget(parent), bkgnd(new QPixmap(":/Background/images/character.png")), lblName(new QLabel(this))
{
    //set sheet size
    setFixedSize(1275,1650);

    //setup Labels
    setupNameLabel();
    setupClassBlock();
    setupStatBlock();
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
    for (int x = 563, i = 236; x < 1002; x+=i,i-=34)
    {
        QLabel *topLabel = new QLabel(this);
        QLabel *btmLabel = new QLabel(this);
        topLabel->setFont(setupFont(topLabel->font(), false, 12));
        btmLabel->setFont(setupFont(btmLabel->font(), false, 12));
        topLabel->setGeometry(x, 92, i-2, 39);
        btmLabel->setGeometry(x, 147,i-2, 39);
        lblClassBlock.push_back(topLabel);
        lblClassBlock.push_back(btmLabel);
    }

    lblClassBlock[0]->setWordWrap(true);

    lblClassBlock[0]->setText("Cleric-3 / Wizard-3");
    lblClassBlock[1]->setText("Elf");
    lblClassBlock[2]->setText("Clergy");
    lblClassBlock[3]->setText("Chaotic Neutral");
    lblClassBlock[4]->setText("Gary Brickhouse");
    lblClassBlock[5]->setText("100,000,000");
}

void CharacterSheet::setupStatBlock()
{
    for (int y = 318; y < 1064; y+=149)
    {
        QLabel *label = new QLabel(this);
        label->setFont(setupFont(label->font(), true, 30));
        label->setGeometry(75, y, 87, 61);
        label->setAlignment(Qt::AlignCenter);
        label->setText("+4");
        lblStatsMod.push_back(label);
    }

    for (int y = 392; y < 1138; y+=149)
    {
        QLabel *label = new QLabel(this);
        label->setFont(setupFont(label->font(), false, 16));
        label->setGeometry(103, y, 31, 19);
        label->setAlignment(Qt::AlignCenter);
        label->setText("18");
    }
}
