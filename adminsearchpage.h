#ifndef ADMINSEARCHPAGE_H
#define ADMINSEARCHPAGE_H

#include <QDialog>

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

private:
    Ui::AdminSearchPage *ui;
};

#endif // ADMINSEARCHPAGE_H
