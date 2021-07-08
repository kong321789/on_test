#ifndef TEST1DIALOG_H
#define TEST1DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLayout>
#include <QLabel>

class test1Dialog : public QDialog
{
    Q_OBJECT

public:
    test1Dialog(QWidget *parent = nullptr);
    ~test1Dialog();

private:
    QPushButton *push;
    QPushButton *exit;

    QHBoxLayout *lyt;

    QLabel *lab;

private:
    void push_clicked();
};
#endif // TEST1DIALOG_H
