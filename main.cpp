#include "matchinfo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MatchInfo w;
    w.show();
    return a.exec();
}
