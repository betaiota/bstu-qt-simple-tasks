#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDateTime>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()),this,SLOT(TimeFunc()));
   timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TimeFunc()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label->setText(time_text);
}
