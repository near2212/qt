
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    c = new Counter(this);

    //connect(ui->pushButton,SIGNAL(on_pushButton_clicked()), c , SLOT(c->SetCounter()));
    connect(this,&MainWindow::on_pushButton_clicked, c , &Counter::SetCounter);
}

MainWindow::~MainWindow()
{
    delete ui;
}



/*void MainWindow::on_pushButton_clicked()
{

}*/


void MainWindow::on_label_windowIconTextChanged()
{
    //ui->label->setWindowIconText(QString::number(c->counter));
    ui->label->setText(QString::number(c->counter));
}

