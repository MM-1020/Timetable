#include<QLabel>
#include"MYLABEL.h"
#include"mainwindow.h"
#include <QTextEdit>
#include"change.h"
#include <QApplication>
#include <QObject>
#include<QDebug>


Mylabel::Mylabel(const QString & text,QWidget* parent)
    :QLabel(parent)
{
     this->setText(text);

     connect(this, SIGNAL(clicked()), this, SLOT(slotClicked()));


}

void Mylabel::slotClicked()
{
    name1="";
    int a=this->text().size(),i;
    for(i=0;i<a;i++){
        if(this->text()[i]!="\n"){
            name1+=this->text()[i];
        }
        else{
            break;
        }
    }
    i++;
    name2="";
    for(;i<a;i++){
        name2+=this->text()[i];
    }

    change *xiugai=new change;
    xiugai->setWindowTitle("课程信息");
    xiugai->show();
    xiugai->name.setText(name1);

    xiugai->place.setText(name2);
}

void Mylabel::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}

