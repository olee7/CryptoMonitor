#include "mainwindow.h"
#include "./http/coinmarketcap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    CoinMarketCap* pCmc = new CoinMarketCap();
    float ethQuote = pCmc->Init();
    const QString quoteString = QString::number(ethQuote);
    w.show();
    return a.exec();
}
