#include "userpage.h"
#include "ui_userpage.h"
#include "mainwindow.h"

UserPage::UserPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserPage)
{
    ui->setupUi(this);
    ui->label->setText(uname);
    qInfo() << uname;
}

UserPage::~UserPage()
{
    delete ui;

}
