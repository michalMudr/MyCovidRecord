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
    this->setWindowTitle("Create Login");
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

    QFile file1(filename);




    if(file1.exists())
    {
        QMessageBox::warning(this,"Login", "Username already exist !!!");
        return;
    }

    if (file1.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QString type = "tests";
        filename = username + type;
        extension = ".txt";
        filename = username + extension;
        QFile file2(filename);
        file2.flush();

        type = "vaccines";
        filename = username + type;
        extension = ".txt";
        filename = username + extension;
        QFile file3(filename);
        file3.flush();


        type = "status";
        filename = username + type;
        extension = ".txt";
        filename = username + extension;
        QFile file4(filename);
        file4.flush();


        QTextStream stream(&file1);
        QString password = ui->textEdit_2->toPlainText();
        stream << password << '\n';
        file1.flush();
        file1.close();
}
    QMessageBox::warning(this,"Login Created", "Account created, please login using your details  !!!");
    close();
}

