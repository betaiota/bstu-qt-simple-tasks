#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
   : QWidget (parent)
{
   setWindowTitle("Привет Мир");                                   //заголовок окна
   helloLb=new QLabel("Привет Мир!",this);                         //текст надписи
   exitBtn=new QPushButton("Выход",this);                          //текст на кнопке
   spinLol=new QSpinBox(this);                                   //заголовок окна
   labelLol=new QLabel("Ничего",this);
   QHBoxLayout *layout = new QHBoxLayout(this);                    // создание горизонтального компоновщика
   layout->addWidget(helloLb);                                     // добавление надписи к компоновщику
   layout->addWidget(exitBtn);
   layout->addWidget(spinLol);
   layout->addWidget(labelLol);
   connect(spinLol,SIGNAL(valueChanged(QString)),labelLol,SLOT(setText(QString)));
   connect(exitBtn,SIGNAL(clicked(bool)),this,SLOT(close()));      // связь сигнала нажатия кнопки и слота закрытия окна
}

MainWindow::~MainWindow()                                         
{
}
