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


void MainWindow::on_action_triggered()
{
   QApplication::quit();
}
void MainWindow::on_action_2_triggered()
{
    static int flager=0;
    if (flager==2)
    {
    ui->label->setText("Ещё раз и я уйду");
    flager=1;
    }
    else if (flager==1)
    {
        ui->label->setText("Пока");
        QApplication::quit();
    }
    else {
         ui->label->setText("Нет справки");
         flager=2;
    }
}
