#include"plan.h"
#include "home.h"
#include "ui_home.h"
#include "newset.h"
#include"minus.h"
#include <QPushButton>
#include <QDateTime>
#include <QScreen>
#include <dialog.h>
#include <mylabel.h>
#include <QTextEdit>
#include<QDebug>
#include <change.h>

int page_i=0;//默认第i周

home::home(QWidget *parent) : QMainWindow(parent),ff(new Ui::Form)
{

    ff->setupUi(this);

    setWindowTitle("课程表");

    ff->plan->setStyleSheet("border :  1px  solid  gray ;\
                           border-radius:  5px ;\
                           background-color:rgb(255,255,255);");

    ff->prt->setText("保存本周课程表图片");
    ff->prt->setStyleSheet("border :  1px  solid  gray ;\
                           border-radius:  5px ;\
                           background-color:rgb(255,255,255);");

    //第几周显示
    ff->stackedWidget->setCurrentIndex(0);

    ff->firstweek->setText("第一周");
    ff->firstweek->setFont(QFont("微软雅黑",12));

    ff->firstweek_2->setText("第二周");
    ff->firstweek_2->setFont(QFont("微软雅黑",12));

    ff->firstweek_3->setText("第三周");
    ff->firstweek_3->setFont(QFont("微软雅黑",12));

    ff->firstweek_4->setText("第四周");
    ff->firstweek_4->setFont(QFont("微软雅黑",12));

    ff->firstweek_5->setText("第五周");
    ff->firstweek_5->setFont(QFont("微软雅黑",12));

    ff->firstweek_6->setText("第六周");
    ff->firstweek_6->setFont(QFont("微软雅黑",12));

    ff->firstweek_7->setText("第七周");
    ff->firstweek_7->setFont(QFont("微软雅黑",12));

    ff->firstweek_8->setText("第八周");
    ff->firstweek_8->setFont(QFont("微软雅黑",12));

    ff->firstweek_9->setText("第九周");
    ff->firstweek_9->setFont(QFont("微软雅黑",12));

    ff->firstweek_10->setText("第十周");
    ff->firstweek_10->setFont(QFont("微软雅黑",12));
    ff->firstweek_11->setText("第十一周");
    ff->firstweek_11->setFont(QFont("微软雅黑",12));
    ff->firstweek_12->setText("第十二周");
    ff->firstweek_12->setFont(QFont("微软雅黑",12));
    ff->firstweek_13->setText("第十三周");
    ff->firstweek_13->setFont(QFont("微软雅黑",12));
    ff->firstweek_14->setText("第十四周");
    ff->firstweek_14->setFont(QFont("微软雅黑",12));
    ff->firstweek_15->setText("第十五周");
    ff->firstweek_15->setFont(QFont("微软雅黑",12));
    ff->firstweek_16->setText("第十六周");
    ff->firstweek_16->setFont(QFont("微软雅黑",12));
    ff->firstweek_17->setText("第十七周");
    ff->firstweek_17->setFont(QFont("微软雅黑",12));

    //下拉框样式表设置
    ff->comboBox->setStyleSheet("QComboBox {\
                           border :  1px  solid  gray ;\
                           border-radius:  5px ;\
                           padding :  1px  2px  1px  2px ;\
                           min-width :  9em ;\
                      }\
                      QComboBox::drop-down {\
                           subcontrol- position :  top  right ;\
                           width :  20px ;\
                           border-left-width :  1px ;\
                           border-left-color : darkgray;\
                           border-left-style :  solid ; \
                           border-top-right-radius:  3px ; \
                           border-bottom-right-radius:  3px ;\
                      }\
                      QComboBox::down-arrow {\
                           width: 15px;\
                           height: 15px;\
                           image:  url(:/new/prefix1/山治桑/down.png);\
                      }");



    //每天的课的时间段
    ff->first->setWordWrap(true);
    ff->first->setText("08:00\n8:45");
    ff->first->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num1->setText(" 01");
    ff->num1->setFont(QFont("隶书",12));
    ff->num1->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->second->setWordWrap(true);
    ff->second->setText("08:50\n9:35");
    ff->num2->setText(" 02");
    ff->num2->setFont(QFont("隶书",12));
    ff->second->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num2->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->third->setWordWrap(true);
    ff->third->setText("09:40\n10:25");
    ff->num3->setText(" 03");
    ff->num3->setFont(QFont("隶书",12));
    ff->third->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num3->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->forth->setWordWrap(true);
    ff->forth->setText("10:40\n11:25");
    ff->num4->setText(" 04");
    ff->num4->setFont(QFont("隶书",12));
    ff->forth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num4->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->fifth->setWordWrap(true);
    ff->fifth->setText("11:30\n12:15");
    ff->num5->setText(" 05");
    ff->num5->setFont(QFont("隶书",12));
    ff->fifth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num5->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->sixth->setWordWrap(true);
    ff->sixth->setText("14:00\n14:45");
    ff->num6->setText(" 06");
    ff->num6->setFont(QFont("隶书",12));
    ff->sixth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num6->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->seventh->setWordWrap(true);
    ff->seventh->setText("14:50\n15:35");
    ff->num7->setText(" 07");
    ff->num7->setFont(QFont("隶书",12));
    ff->seventh->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num7->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->eighth->setWordWrap(true);
    ff->eighth->setText("15:50\n16:35");
    ff->num8->setText(" 08");
    ff->num8->setFont(QFont("隶书",12));
    ff->eighth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num8->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->ninth->setWordWrap(true);
    ff->ninth->setText("16:40\n17:25");
    ff->num9->setText(" 09");
    ff->num9->setFont(QFont("隶书",12));
    ff->ninth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num9->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->tenth->setWordWrap(true);
    ff->tenth->setText("17:30\n18:15");
    ff->num10->setText(" 10");
    ff->num10->setFont(QFont("隶书",12));
    ff->tenth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num10->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->eleventh->setWordWrap(true);
    ff->eleventh->setText("19:00\n19:45");
    ff->num11->setText(" 11");
    ff->num11->setFont(QFont("隶书",12));
    ff->eleventh->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num11->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->twelfth->setWordWrap(true);
    ff->twelfth->setText("19:50\n20:35");
    ff->num12->setText(" 12");
    ff->num12->setFont(QFont("隶书",12));
    ff->twelfth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num12->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->thirteenth->setWordWrap(true);
    ff->thirteenth->setText("20:40\n21:25");
    ff->num13->setText(" 13");
    ff->num13->setFont(QFont("隶书",12));
    ff->thirteenth->setStyleSheet("QLabel{color:rgb(32,48,126);""}");
    ff->num13->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    //星期
    ff->mon->setText("周一");
    ff->mon->setFont(QFont("隶书",12));
    ff->mon->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->tue->setText("周二");
    ff->tue->setFont(QFont("隶书",12));
    ff->tue->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->wed->setText("周三");
    ff->wed->setFont(QFont("隶书",12));
    ff->wed->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->thu->setText("周四");
    ff->thu->setFont(QFont("隶书",12));
    ff->thu->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->fri->setText("周五");
    ff->fri->setFont(QFont("隶书",12));
    ff->fri->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->sat->setText("周六");
    ff->sat->setFont(QFont("隶书",12));
    ff->sat->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    ff->sun->setText("周日");
    ff->sun->setFont(QFont("隶书",12));
    ff->sun->setStyleSheet("QLabel{color:rgb(32,48,126);""}");

    //上下周切换按钮
    ff->nextPage->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/next.png);}");
    ff->lastPage->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/last.png);}");
    ff->nextPage->resize(40,40);
    ff->lastPage->resize(40,40);
    ff->pushButton->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/delete.png);}");
    ff->pushButton->resize(40,40);

    //课程表主体框
    for(int i=0;i<20;i++)
    {
        excel[i] = new QWidget(ff->stackedWidget->widget(i));
        excel[i]->move(100,50);
        excel[i]->resize(1061,851);
    }

    //创建课程
    ff->putIn->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/plus.png);}");
    ff->putIn->resize(40,40);
    connect(ff->putIn,&QPushButton::released,
            [=](){
                p.show();
            }
            );

    //处理“确认”按钮发来的信号
    connect(&p,&NewSet::mySingnal,this,&home::dealNew);

    //处理“删除”按钮发来的信号
    connect(&p,&NewSet::mySingnal2,this,&home::dealNew2);

    connect(&q,&minus::mySingnal3,this,&home::dealNew3);

}


void home::on_lastPage_clicked()
{
    page_i--;
    ff->stackedWidget->setCurrentIndex(page_i%20);
}

void home::on_nextPage_clicked()
{
    page_i++;
    ff->stackedWidget->setCurrentIndex(page_i%20);
}

void home::on_comboBox_currentIndexChanged(int index)
{
    ff->stackedWidget->setCurrentIndex(index);
    page_i=index;
}

void home::dealNew()
{


    for(int i=0;i<20;i++)
    {//周数遍历
        //widget(i)
        if(p.checkbox2[i]->isChecked()==0)
        {
            continue;
        }

        for(int j=0;j<7;j++)
        {//星期遍历
            int flag=0;//记录连续节数
            for(int k=0;k<13;k++)
            {//节次遍历
                if(p.checkbox[j][k]->isChecked())
                {//判断是否有课
                    flag=1;
                    for(int s=k+1;s<13;s++)
                    {
                        if(p.checkbox[j][s]->isChecked())
                        {
                            flag++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    subject[w]= new Mylabel("",excel[i]);
                    subject[w]->move(50+j*150,0+65*k);
                    subject[w]->setText(p.courseName+"\n"+p.courseplace);
                    subject[w]->setFont(QFont("楷体",12));
                    //自动换行
                    subject[w]->setWordWrap(true);

                    //居中
                    subject[w]->setAlignment(Qt::AlignCenter);

                    subject[w]->resize(91,65*flag);
                    if(p.color==0)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(255,182,193);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==1)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(230,230,250);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==2)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(221,160,221);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==3)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(255,105,180);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==4)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(72,61,139);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==5)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(135,206,250);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==6)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(72,209,204);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==7)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(152,251,152);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==8)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(189,183,107);"
                                                        "border-radius:10px;}");
                    }
                    if(p.color==9)
                    {
                        subject[w]->setStyleSheet("QLabel{color:rgb(255,255,255);"
                                                        "background-color:rgb(222,184,135);"
                                                        "border-radius:10px;}");
                    }
                    subject[w]->show();
                    w++;
                    k=k+flag-1;
                }
            }
        }

    }

    //清空
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<13;j++)
        {
            p.checkbox[i][j]->setChecked(false);
        }
    }
    for(int i=0;i<20;i++)
    {
        p.checkbox2[i]->setChecked(false);
    }

    p.dayto();

}

void home::dealNew2()
{

    //清空
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<13;j++)
        {
            p.checkbox[i][j]->setChecked(false);
        }
    }
    for(int i=0;i<20;i++)
    {
        p.checkbox2[i]->setChecked(false);
    }
    p.dayto();

}

void home::dealNew3()
{
    for(int i=0;i<w;i++){
        QString h=subject[i]->text(),x="";
        int s=h.size();
        int j;
        for(j=0;j<s;j++){
            if(h[j]!="\n") {
                x+=h[j];
            }
            else{
                break;
            }
        }
        qDebug()<<x;
        if(x==q.a){
            delete subject[i];
            q.hide();
            ff->pushButton->hide();
        }
        else{
            q.label_2.show();
        }
    }

}


void home::on_prt_clicked()
{
    QScreen *screen=QGuiApplication::primaryScreen();

    QPixmap pixmap=screen->grabWindow(ff->stackedWidget->winId());
        //qvtkWidget->winId()这是你要截图的控件的winID，主窗口0（全屏截图的意思）winId(0)
    pixmap.save("E:/screen.jpg","jpg"); //保存地址可以改成你自己的
    s.show();

}

void home::on_plan_clicked()
{
    plan *b=new plan;
    b->setWindowTitle("今日计划");
    b->show();
}

void home::on_pushButton_clicked()
{
    q.show();
}
