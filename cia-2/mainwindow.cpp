#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);

        QAction *a1=new QAction;
        QAction *a2=new QAction;
        QAction *a3=new QAction;
        a1->setText("First");
        a2->setText("Second");
        a3->setText("Third");
        QMenu *menu=new QMenu;
        menu->addAction(a1);
        menu->addAction(a2);
        menu->addAction(a3);
        ui->pushButton_6->setMenu(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"212218104159","this is my information");
}

void MainWindow::on_pushButton_2_clicked()
{
  QMessageBox::critical(this,"212218104159","this is critical");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"212218104159","do you like cats",QMessageBox::Yes|QMessageBox::No);
        if(reply==QMessageBox::Yes)
        {
            QApplication::quit();
        }
}

void MainWindow::on_pushButton_4_clicked()
{
     QMessageBox::warning(this,"212218104159","this is warning message");
}

void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
        {
             ui->pushButton_5->setIcon(QIcon("C:/Users/Sruthi/Pictures/on.png"));
             QTextStream stream(stdout);
             {
                 stream<<"Button clicked--ON--"<<endl;
             }
        }
    else
        {
             ui->pushButton_5->setIcon(QIcon("C:/Users/Sruthi/Pictures/off.png"));
             QTextStream stream(stdout);
             {
                 stream<<"Button unclicked--OFF--"<<endl;
             }
        }
}
