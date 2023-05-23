#ifndef ADMINSEARCHPAGE_H
#define ADMINSEARCHPAGE_H
#include <QMainWindow>
#include <QDialog>
#include "dialogadmin.h"


namespace Ui {
class AdminSearchPage;
}

class AdminSearchPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminSearchPage(QWidget *parent = nullptr);
    ~AdminSearchPage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AdminSearchPage *ui;
    DialogAdmin * dialogadmin;
};

#endif // ADMINSEARCHPAGE_H
