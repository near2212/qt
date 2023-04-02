#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    Counter *c = new Counter;
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(on_pushButton_clicked()), c , SLOT(c->SetCounter()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_label_windowIconTextChanged(const QString &iconText)
{
    ui->label->setText(iconText);
}

