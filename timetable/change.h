#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>
#include"mylabel.h"
#include<QLineEdit>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();
    void SetCodec();

    QLineEdit name;
    QLineEdit place;

    QString b;



private slots:
    void on_pushButton_clicked();
private:
    Ui::change *ui;
};

#endif // CHANGE_H
