#ifndef STUTBL_H
#define STUTBL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class stutbl; }
QT_END_NAMESPACE

class stutbl : public QWidget
{
    Q_OBJECT

public:
    stutbl(QWidget *parent = nullptr);
    ~stutbl();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::stutbl *ui;
};
#endif // STUTBL_H
