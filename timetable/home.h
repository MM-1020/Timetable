#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include "newset.h"
#include <dialog.h>
#include <mylabel.h>
#include"minus.h"
#include"change.h"

//class Mylabel;

namespace Ui {
class Form;
}

class home : public QMainWindow
{
    Q_OBJECT
public:
    explicit home(QWidget *parent = nullptr);
    void dealNew();
    void dealNew2();
    void dealNew3();
    QWidget *excel[20];
//    Mylabel *mylabel;
    Mylabel *subject[2000];

private:
    Ui::Form *ff;
    NewSet p;
    Dialog s;

    minus q;

    int w=0;


signals:

public slots:
private slots:

    void on_lastPage_clicked();
    void on_nextPage_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_prt_clicked();
    void on_plan_clicked();
    void on_pushButton_clicked();
};

#endif // HOME_H
