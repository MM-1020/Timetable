#include "change.h"
#include "ui_change.h"
#include <QTextCodec>
#include "biji.h"
#include<QString>
#include<QDebug>

change::change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);



    name.setParent(this);
    name.setGeometry(180,80,161,31);
    name.show();
    place.setParent(this);
    place.setGeometry(180,170,161,31);
    place.show();

}

change::~change()
{
    delete ui;
}

void change::on_pushButton_clicked()
{
    SetCodec();

    biji *b=new biji;
    b->setWindowTitle("笔记");
    b->show();
    //    b->exec();
    /*    QTextEdit *text=new QTextEdit;

    text->resize(100,100);
    text->setWindowTitle("备注");
    text->show();
    */
}

void change::SetCodec()
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//设置编码格式为UTF-8

    QTextCodec::setCodecForLocale(codec);//这个函数主要用于设置和对本地文件系统读写时候的默认编码格式。

}

