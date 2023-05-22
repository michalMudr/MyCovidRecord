#include "createaccount.h"
#include "ui_createaccount.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

QString username;

createAccount::createAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createAccount)
{
    ui->setupUi(this);
}

createAccount::~createAccount()
{
    delete ui;
}

void createAccount::on_pushButton_2_clicked()
{
    QString username = ui->textEdit->toPlainText();
    QString extension = ".txt";
    QString filename = username + extension;

    QFile file(filename);
    if(file.exists())
    {
        QMessageBox::warning(this,"Login", "Username already exist !!!");
        return;
    }

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream stream(&file);
        QString password = ui->textEdit_2->toPlainText();
        stream << password << '\n';
        file.flush();
        file.close();
}

}

