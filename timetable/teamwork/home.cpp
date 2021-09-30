#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent) : QMainWindow(parent),ff(new Ui::Form)
{
    this->setWindowTitle("课程表");
    ff->setupUi(this);


    //第几周显示
    ff->firstweek->setText("第一周");
    ff->firstweek->setFont(QFont("微软雅黑",12));

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

}
