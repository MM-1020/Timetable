#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QPainter>
#include<QPushButton>
#include<QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(610,400);
    schedule.show();

    //账号密码初始化
    adminAccount="鲜鱼肝儿";
    adminpasswd="0000";


    ui->imagelabel->setPixmap(QPixmap("://new/prefix1/山治桑/sea.jpg"));
    //让图片自动适应label大小
    ui->imagelabel->setScaledContents(true);

    //label设置
    ui->label->setWordWrap(true);
    ui->label->setText("                         \n                           LOG IN");
    ui->label->setStyleSheet("QLabel{color:rgb(250,250,250);""}");

    ui->ayslabel->resize(100,20);
    ui->pyslabel->resize(100,20);

    ui->ayslabel->setText("wrong");
    ui->pyslabel->setText("wrong");

    ui->ayslabel->hide();
    ui->pyslabel->hide();

    //关闭和缩小button
    ui->closed->setText("X");
    connect(ui->closed,&QPushButton::pressed,this,&MainWindow::close);
    ui->zuixiaohua->setText("-");
    connect(ui->zuixiaohua,&QPushButton::pressed,this,&MainWindow::showMinimized);

    //隐藏窗口的边框和背景
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    setAttribute(Qt::WA_TranslucentBackground);

    //设置密码输入为圆圈，以免密码泄露
    ui->passEdit->setEchoMode(QLineEdit::Password);


    //登录button
    ui->logButton->setText("Log in");
    connect(ui->logButton,&QPushButton::released,
            [=]()
            {
                QString account = ui->accountEdit->text();
                QString pass = ui->passEdit->text();

               //判断账号密码是否正确
                if(account != adminAccount)
                {
                    ui->ayslabel->show();
                }

                if(pass != adminpasswd){
                    ui->pyslabel->show();
                }
                else{
                    this->hide();
                    schedule.show();
                }
            }

            );


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton){
        p=e->globalPos()-this->frameGeometry().topLeft();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *e){
    if(e->buttons()&Qt::LeftButton){
        move(e->globalPos()-p);
    }
}
