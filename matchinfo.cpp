#include "matchinfo.h"
#include "ui_matchinfo.h"
// Dodać przedmeczowe sprawdzenie kto z kim gra
// Dodać wgląd do odbytych już meczy
// By było grupowanie na ligi np w piłce nożnej
// Wszystkie dane pobierane były z bazy danych
MatchInfo::MatchInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MatchInfo)
{
    ui->setupUi(this);
    QStringList CoulmnName;
    setWindowTitle("MatchInfo");
    ui->tableWidget->setCoulmnCount(4);
    CoulmnName<<"Data" << "Home" << "Away" << "Result";
    ui->tableWidget->setHorizontalHeaderLabels(CoulmnName);
    ui->tableWidget->setItem(0, 1, new QTabletWidgetItem("10-10-2019"));
    ui->tableWidget->setItem(0, 2, new QTabletWidgetItem("Polska"));
    ui->tableWidget->setItem(0, 3, new QTabletWidgetItem("Austria"));
    ui->tableWidget->setItem(0, 4, new QTabletWidgetItem("3-2"));
}

MatchInfo::~MatchInfo()
{
    delete ui;
}






