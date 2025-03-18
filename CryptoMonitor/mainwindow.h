#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./settings/settingswindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void generateTopTen();
    void generateNewCoin(QString* dateText, const QString& priceText, QString* diffText);
    ~MainWindow();

private slots:
    void on_settings_clicked();

private:
    Ui::MainWindow *ui;
    Ui::SettingsWindow *settingsUi;
};
#endif // MAINWINDOW_H
