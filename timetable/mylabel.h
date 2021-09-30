#ifndef MYLABEL_H
#define MYLABEL_H
#include<QLabel>
#include<QString>
#include<QWidget>
#include<QMainWindow>
#include"QMessageBox"
#include<QString>


class Mylabel:public QLabel
{
    Q_OBJECT
public:
    Mylabel(QWidget *parent=0);
    Mylabel(const QString &text,QWidget *parent=0);
    ~Mylabel(){}
    void SetCodec();
    QString name1;
    QString name2;

signals:
    void clicked();
public slots:
    void slotClicked();
protected:
    void mousePressEvent(QMouseEvent* event);

};


#endif // MYLABEL_H
