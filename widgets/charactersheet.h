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
    void setupStatBlock();

    QPixmap *bkgnd;
    QLabel *lblName;
    //QLabel *lblInspiration;
    //QLabel *lblProfBonus;
    //QLabel *lblStrSave, *lblDexSave, *lblConSave, *lblIntSave, *lblWisSave, *lblChaSave;
    //QLabel *lblStrProf, *lblDexProf, *lblConProf, *lblIntProf, *lblWisProf, *lblChaProf;
    //QLabel *lblAcrobatics, *lblAnimalHandling, *lblArcana, *lblAthletics, *lblDeception, *lblHistory, *lblInsight, *lblIntimidation, *lblInvestigation,
    //       *lblMedicine, *lblNature, *lblPerception, *lblPerformance, *lblPersuasion, *lblReligion, *lblSleightOfHand, *lblStealth, *lblSurvival;
    //QLabel *lblAcrobaticsProf, *lblAnimalHandlingProf, *lblArcanaProf, *lblAthleticsProf, *lblDeceptionProf, *lblHistoryProf, *lblInsightProf, *lblIntimidationProf, *lblInvestigationProf,
    //       *lblMedicineProf, *lblNatureProf, *lblPerceptionProf, *lblPerformanceProf, *lblPersuasionProf, *lblReligionProf, *lblSleightOfHandPof, *lblStealthProf, *lblSurvivalProf;
    QList<QLabel *> lblClassBlock;
    QList<QLabel *> lblStats, lblStatsMod;
signals:

};

#endif // CHARACTERSHEET_H
