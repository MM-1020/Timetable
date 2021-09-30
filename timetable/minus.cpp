#include "minus.h"
#include "ui_minus.h"
#include<QLabel>

minus::minus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::minus)
{
    ui->setupUi(this);
    label_2.setParent(this);
    label_2.setText("课程名称错误");
    label_2.move(140,170);
    label_2.hide();
}

minus::~minus()
{
    delete ui;
}

void minus::on_pushButton_clicked()
{
    a=ui->lineEdit->text();
    sendSlot3();
}

void minus::sendSlot3()
{
    emit mySingnal3();
}

