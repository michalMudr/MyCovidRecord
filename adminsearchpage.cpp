#include "adminsearchpage.h"
#include "ui_adminsearchpage.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>


AdminSearchPage::AdminSearchPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminSearchPage)
{
    ui->setupUi(this);
    this->setWindowTitle("Admin search page");
}

AdminSearchPage::~AdminSearchPage()
{
    delete ui;
}

void AdminSearchPage::on_pushButton_clicked()
{
    QString uname = ui->lineEdit->text();
    username = uname;
    QString extension = ".txt";
    QString filename = username + extension;
    QString line;

    QFile file(filename);

    if(!file.exists())
    {
        QMessageBox::warning(this,"Login", "Username does not exist !!!");
        return;
    }
    if(file.exists())
    {
        dialogadmin = new DialogAdmin(this);
        dialogadmin->show();
        return;
    }


}


void AdminSearchPage::on_pushButton_2_clicked()
{
    close();
}

