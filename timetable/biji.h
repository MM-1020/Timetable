#ifndef BIJI_H
#define BIJI_H

#include <QWidget>
#include<QMenu>
#include<QString>

namespace Ui {
class biji;
}

class biji : public QWidget
{
    Q_OBJECT

public:
    explicit biji(QWidget *parent = nullptr);
    ~biji();

private slots:
    void on_SaveFile_clicked();

    void on_clear_clicked();

    void on_SelectFile_clicked();

private:
    Ui::biji *ui;
    //  Settings *m_pSettings;//读写工具类对象
      QString FilePath;//记录文件的路径
      QMenu *menu;    //菜单对象

      bool OpenSeleteFile();//弹出选择文件对话框
      void ShowTxtToWindow();//显示txt文件内容
    //  void SaveTxtDocument();//保存内容至文件
};

#endif // BIJI_H
