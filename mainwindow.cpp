#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::change_channel(const QString& button) {
    int channel = ui->channel->text().toInt();
    if (button == "+") {
        if (channel < 99) {
            ++channel;
        } else channel = 0;
    } else if (button == "-") {
        if (channel > 0) {
            --channel;
        } else channel = 99;
    } else {
        channel = button.toInt();
    }
    ui->channel->setText(QString().setNum(channel));
}

void MainWindow::change_volume(const QString& button) {
    int volume = ui->volume->text().toInt();
    if (button == "+") {
        if (volume < 91) {
            volume += 10;
        } else volume = 100;
    } else if (button == "-") {
        if (volume > 9) {
            volume -= 10;
        } else volume = 0;
    }
    ui->volume->setText(QString().setNum(volume));
}
