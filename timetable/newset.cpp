#include "newset.h"
#include "ui_newset.h"
#include <QPainter>
#include <QDebug>
#include <home.h>
#include <QCheckBox>
#include <QString>
#include <QLabel>

NewSet::NewSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewSet)
{
    ui->setupUi(this);

    //输入课程名称
    ui->course->setPixmap(QPixmap(":/new/prefix1/山治桑/book2.png"));
    ui->course->resize(50,50);
    ui->course->move(40,20);
    ui->course->setScaledContents(true);

    //设定课程颜色
    ui->color->setPixmap(QPixmap("://new/prefix1/山治桑/pen2.png"));
    ui->color->resize(50,50);
    ui->color->move(40,125);
    ui->color->setScaledContents(true);
    creatColorComboBox(ui->colorSelect);
    //选择课程时间的控件
    for(int i=0;i<7;i++)
    {
        ui->stackedWidget->setCurrentIndex(i+1);
        for(int j=0;j<13;j++)
        {
            checkbox[i][j] = new QCheckBox(ui->stackedWidget->currentWidget());

            //设定位置
            if(j<7)
            {
                checkbox[i][j]->move(10+j*50,20);
            }
            else
            {
                checkbox[i][j]->move(10+(j-7)*50,50);
            }

            //设定文本内容
            if(j==0)
            {
                checkbox[i][j]->setText("1");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");

            }
            if(j==1)
            {
                checkbox[i][j]->setText("2");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==2)
            {
                checkbox[i][j]->setText("3");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==3)
            {
                checkbox[i][j]->setText("4");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==4)
            {
                checkbox[i][j]->setText("5");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==5)
            {
                checkbox[i][j]->setText("6");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==6)
            {
                checkbox[i][j]->setText("7");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==7)
            {
                checkbox[i][j]->setText("8");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==8)
            {
                checkbox[i][j]->setText("9");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==9)
            {
                checkbox[i][j]->setText("10");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==10)
            {
                checkbox[i][j]->setText("11");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==11)
            {
                checkbox[i][j]->setText("12");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
            if(j==12)
            {
                checkbox[i][j]->setText("13");
                //checkbox样式设置
                checkbox[i][j]->setStyleSheet("QCheckBox::indicator {\
                                            width: 15px;/*勾选框的大小*/\
                                            height: 15px;\
                                        }QCheckBox::indicator:unchecked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                        }\
                                        /*勾选框未选中时有光标停留的图像*/\
                                        QCheckBox::indicator:unchecked:hover {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }QCheckBox::indicator:checked {\
                                            image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                        }");
            }
        }
    }
    ui->stackedWidget->setCurrentIndex(0);

    //选择课程周数
    ui->week->setText("点击选择周数");

    for(int i=0;i<20;i++)
    {
        checkbox2[i] = new QCheckBox(ui->widget_2);
        //设定位置
        if(i<10)
        {
            checkbox2[i]->move(10+i*40,20);
        }
        else
        {
            checkbox2[i]->move(10+(i-10)*40,50);
        }

        //设定文本内容
        if(i==0)
        {
            checkbox2[i]->setText("1");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==1)
        {
            checkbox2[i]->setText("2");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==2)
        {
            checkbox2[i]->setText("3");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==3)
        {
            checkbox2[i]->setText("4");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==4)
        {
            checkbox2[i]->setText("5");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==5)
        {
            checkbox2[i]->setText("6");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==6)
        {
            checkbox2[i]->setText("7");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==7)
        {
            checkbox2[i]->setText("8");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==8)
        {
            checkbox2[i]->setText("9");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==9)
        {
            checkbox2[i]->setText("10");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==10)
        {
            checkbox2[i]->setText("11");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==11)
        {
            checkbox2[i]->setText("12");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==12)
        {
            checkbox2[i]->setText("13");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==13)
        {
            checkbox2[i]->setText("14");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==14)
        {
            checkbox2[i]->setText("15");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==15)
        {
            checkbox2[i]->setText("16");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==16)
        {
            checkbox2[i]->setText("17");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==17)
        {
            checkbox2[i]->setText("18");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==18)
        {
            checkbox2[i]->setText("19");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
        if(i==19)
        {
            checkbox2[i]->setText("20");
            //checkbox样式设置
            checkbox2[i]->setStyleSheet("QCheckBox::indicator {\
                                        width: 15px;/*勾选框的大小*/\
                                        height: 15px;\
                                    }QCheckBox::indicator:unchecked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_white.png);\
                                    }\
                                    /*勾选框未选中时有光标停留的图像*/\
                                    QCheckBox::indicator:unchecked:hover {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }QCheckBox::indicator:checked {\
                                        image: url(:/new/prefix1/山治桑/checkbox_blue.png);\
                                    }");

        }
    }

    ui->chooseall->setText("");
    connect(ui->chooseall,&QPushButton::clicked,
            [&](){
                for(int i=0;i<20;i++){
                    checkbox2[i]->setChecked(true);
                }
            }
            );
    ui->chooseall->setText("");
        ui->chooseall->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/chooseAll.png);}");
        ui->chooseall->resize(60,30);
        connect(ui->chooseall,&QPushButton::clicked,
                [&](){
                    for(int i=0;i<20;i++){
                        checkbox2[i]->setChecked(true);
                    }
                }
                );

        //删除或保存课程
        ui->deleteIt->setText("");
        ui->ok->setText("");
        ui->deleteIt->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/no.png);}");
        ui->deleteIt->resize(40,40);
        ui->ok->setStyleSheet("QPushButton{border-image:url(:/new/prefix1/山治桑/ok.png);}");
        ui->ok->resize(40,40);
        ui->label->setStyleSheet("QLabel{border-image:url(:/new/prefix1/山治桑/where.png);}");
        ui->label->resize(60,60);
        ui->label->move(35,70);

    //删除或保存课程

    connect(ui->ok,&QPushButton::clicked,
            [=](){
                this->close();
                courseName = ui->courseIn->text();//保存输入的课程名
                courseplace=ui->subject_place->text();//保存输入的地点
                sendSlot();
            }
            );
    connect(ui->deleteIt,&QPushButton::clicked,
            [=](){
                sendSlot2();

            }
            );

    ui->week->setStyleSheet("border :  1px  solid  gray ;\
                            border-radius:  5px ;\
                            background-color:rgb(255,255,255);"
            );

    //输入框设置圆角
    ui->courseIn->setStyleSheet("QLineEdit{\
                                border :  1px  solid  darkgray ;\
                                border-radius:  5px ;\
                           }");
    //输入框设置圆角
    ui->subject_place->setStyleSheet("QLineEdit{\
                                border :  1px  solid  darkgray ;\
                                border-radius:  5px ;\
                           }");

    //颜色下拉框样式表设置
    ui->colorSelect->setStyleSheet("QComboBox {\
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


    //星期下拉框样式表设置
    ui->day->setStyleSheet("QComboBox {\
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

}

void NewSet::creatColorComboBox(QComboBox *comboBox)
{
    QPixmap pix(16,16);
    QPainter painter(&pix);
    painter.fillRect(0,0,16,16,QColor(255,182,193));
    comboBox->addItem(QIcon(pix),tr("LightPink浅粉红"),QColor(255,182,193));
    painter.fillRect(0,0,16,16,QColor(230,230,250));
    comboBox->addItem(QIcon(pix),tr("Lavender熏衣草花的淡紫色"),QColor(230,230,250));
    painter.fillRect(0,0,16,16,QColor(221,160,221));
    comboBox->addItem(QIcon(pix),tr("plum李子"),QColor(221,160,221));
    painter.fillRect(0,0,16,16,QColor(255,105,180));
    comboBox->addItem(QIcon(pix),tr("HotPink热情的粉红"),QColor(255,105,180));
    painter.fillRect(0,0,16,16,QColor(72,61,139));
    comboBox->addItem(QIcon(pix),tr("DarkSlateBlue深岩暗蓝灰色"),QColor(72,61,139));
    painter.fillRect(0,0,16,16,QColor(135,206,250));
    comboBox->addItem(QIcon(pix),tr("LightSkyBlue淡蓝色"),QColor(135,206,250));
    painter.fillRect(0,0,16,16,QColor(72,209,204));
    comboBox->addItem(QIcon(pix),tr("MediumTurquoise适中的绿宝石"),QColor(72,209,204));
    painter.fillRect(0,0,16,16,QColor(152,251,152));
    comboBox->addItem(QIcon(pix),tr("PaleGreen苍白的绿色"),QColor(152,251,152));
    painter.fillRect(0,0,16,16,QColor(189,183,107));
    comboBox->addItem(QIcon(pix),tr("DarkKhaki深卡其布"),QColor(189,183,107));
    painter.fillRect(0,0,16,16,QColor(222,184,135));
    comboBox->addItem(QIcon(pix),tr("BrulyWood结实的树"),QColor(222,184,135));
}




NewSet::~NewSet()
{
    delete ui;
}

void NewSet::on_day_currentIndexChanged(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}

void NewSet::sendSlot()
{
    emit mySingnal();
}

void NewSet::sendSlot2(){
    emit mySingnal2();
}

void NewSet::on_colorSelect_currentIndexChanged(int index)
{
    color=index-1;
}

void NewSet::dayto()
{
    ui->day->setCurrentIndex(0);
    ui->colorSelect->setCurrentIndex(0);
    ui->courseIn->setText("");
    ui->subject_place->setText("");
}
