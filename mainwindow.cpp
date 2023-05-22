#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include  <QCoreApplication>
#include <QMessageBox>

QString uname;
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


void MainWindow::on_pushButton_2_clicked()
{
    createaccount = new createAccount(this);
    createaccount->show();
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->textEdit->toPlainText();
    uname = username;
    QString extension = ".txt";
    QString filename = username + extension;
    QString line;
    QString password = ui->textEdit_2->toPlainText();
    QFile file(filename);

    if(!file.exists())
    {
        QMessageBox::warning(this,"Login", "Username does not exist !!!");
        return;
    }
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        line = stream.readLine();

    }

    if (line == password)
    {
       userpage = new UserPage(this);
       userpage->show();
       return;

    }

}



void MainWindow::on_pushButton_3_clicked()
{
     QString username = ui->textEdit->toPlainText();
     QString password = ui->textEdit_2->toPlainText();

     if (username == "admin" and password == "admin")
     {
       adminsearchpage = new AdminSearchPage(this);
       adminsearchpage->show();
       return;

     }
}

