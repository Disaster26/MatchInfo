#ifndef MATCHINFO_H
#define MATCHINFO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MatchInfo; }
QT_END_NAMESPACE

class MatchInfo : public QMainWindow
{
    Q_OBJECT

public:
    MatchInfo(QWidget *parent = nullptr);
    ~MatchInfo();

private slots:
    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::MatchInfo *ui;
};
#endif // MATCHINFO_H
