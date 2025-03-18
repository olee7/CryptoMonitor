#include <QDebug>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateTopTen() {
}

void MainWindow::generateNewCoin(QString* dateText, const QString& priceText, QString* diffText) {
    // Gotta create an image and add it to the QHBoxLayout.

    QLabel* date = new QLabel;
    date->setText("date goes here");
    date->setStyleSheet("background-color: white; border: 1px solid black; border-radius: 10px;");
    date->setMinimumWidth(100);
    date->setMinimumHeight(50);

    QLabel* price = new QLabel;
    price->setText(priceText);
    price->setStyleSheet("background-color: white; border: 1px solid black; border-radius: 10px;");
    price->setMinimumWidth(300);
    price->setMinimumHeight(50);

    QLabel* diff = new QLabel;
    diff->setText("diff goes here");
    diff->setStyleSheet("background-color: white; border: 1px solid black; border-radius: 10px;");
    diff->setMinimumWidth(100);
    diff->setMinimumHeight(50);

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(date);
    layout->addWidget(price);
    layout->addWidget(diff);
    ui->pricesLayout->addLayout(layout);
}

void MainWindow::on_settings_clicked()
{
    qDebug() << "on_settings_clicked() invoked";
    //close() // Can cause memory leak. Closes the window, but it doesn't destroy the process.
    SettingsWindow* settingsWindow = new SettingsWindow();
    settingsWindow->show();
}
