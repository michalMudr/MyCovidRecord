#include "adminsearchpage.h"
#include "ui_adminsearchpage.h"
#include "userpage.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include  <QCoreApplication>
#include <QMessageBox>

AdminSearchPage::AdminSearchPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminSearchPage)
{
    ui->setupUi(this);
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
    if (file.open(QIODevice::ReadOnly))
    {

        return;

    }


}

