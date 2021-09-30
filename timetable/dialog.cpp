#include "dialog.h"
#include "ui_dialog.h"

#include <QTimer>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->setGeometry(500,500,200,100);

    this->setWindowTitle("已保存当前课程表图片");

    timer=new QTimer();

    timer->start(3000);

    connect(timer,&QTimer::timeout,this,
            [=](){
                this->close();
            }
            );
}

Dialog::~Dialog()
{
    delete ui;
}


