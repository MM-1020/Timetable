#ifndef NEWSET_H
#define NEWSET_H

#include <QWidget>
#include <QComboBox>
#include <QCheckBox>
#include <QString>


namespace Ui {
class NewSet;
}

class NewSet : public QWidget
{
    Q_OBJECT

public:
    explicit NewSet(QWidget *parent = 0);
    int color;
    QCheckBox *checkbox[7][13];//课程时间
    QCheckBox *checkbox2[20];//课程周数
    QString courseName;
    QString courseplace;
    void creatColorComboBox(QComboBox *comboBox);
    void sendSlot();
    void sendSlot2();

    //清空界面
    void dayto();

    ~NewSet();

signals:
    void mySingnal();
    void mySingnal2();


private slots:
    void on_day_currentIndexChanged(int index);

    void on_colorSelect_currentIndexChanged(int index);

private:
    Ui::NewSet *ui;
};

#endif // NEWSET_H
