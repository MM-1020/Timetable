#include "biji.h"
#include "ui_biji.h"
#include <QMessageBox>
#include <QStandardItemModel>
#include <QtableWidget>
#include <QListWidget>
#include <QDebug>
#include <QVariant>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QItemSelectionModel>
#include <QModelIndexList>
#include <QModelIndex>
#include <QHeaderView>

biji::biji(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::biji)
{
    ui->setupUi(this);
    setWindowTitle("笔记");
    resize(800,700);
}

biji::~biji()
{
    delete ui;
}

void biji::on_SaveFile_clicked()
{
    QFile myfile(FilePath);//创建一个输出文件的文档
        if (myfile.open(QFile::WriteOnly|QFile::Text))//注意WriteOnly是往文本中写入的时候用，ReadOnly是在读文本中内容的时候用，Truncate表示将原来文件中的内容清空
        {
            QTextStream out(&myfile);
            out << ui->textEdit->toPlainText();
        }
        ShowTxtToWindow();
}

void biji::on_clear_clicked()
{
    int sure=QMessageBox::question(this,QString::fromUtf8("提醒"),QString::fromUtf8("确定要清空吗？\n警告：会丢失未保存的笔记"),
                                   QMessageBox::Yes | QMessageBox::No);
    if(sure==QMessageBox::Yes)
    {
        ui->textEdit->setText("");
    }
}

void biji::on_SelectFile_clicked()
{
    if(false == OpenSeleteFile())//弹出选择文件对话框 如果成功选择文件，主线程myWidget类就有对象存储了文件路径
      {
        return;
      }
      if(FilePath == "")//如果没有选择文件，即文件路径为空
      {
        return;
      }
      ui->le_FilePath->setText(FilePath);//如果选中了文件，setText() 或者 insert() 改变其中的文本,那么行编辑器中就会出现选中的文件的路径
      ShowTxtToWindow();
}

bool biji::OpenSeleteFile()//弹出选择文件对话框
{

  QString strPath = QFileDialog::getOpenFileName(NULL,QString::fromUtf8("选择文件"),"",QObject::tr("txt(*.txt)"));
  if(strPath == "")
  {
    QMessageBox::information(this,QString::fromUtf8("提示"),QString::fromUtf8("选择文件失败，无路径"),"OK");
    return false;//用户点击的取消按钮
  }
  FilePath = strPath;
  return true;
}

void biji::ShowTxtToWindow()//显示文本文件中的内容
{
    QString fileName = FilePath;

    if(!fileName.isEmpty())
    {
        QFile *file = new QFile;
        file->setFileName(fileName);
        bool ok = file->open(QIODevice::ReadOnly);
        if(ok)
        {
            QTextStream in(file);
            ui->textEdit->setText(in.readAll());
            file->close();
            delete file;
        }
        else
        {
            QMessageBox::information(this,"错误信息","打开文件:" + file->errorString());
            return;
        }
    }
}
