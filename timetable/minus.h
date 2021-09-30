#ifndef MINUS_H
#define MINUS_H

#include <QWidget>
#include<QString>
#include<QLabel>

namespace Ui {
class minus;
}

class minus : public QWidget
{
    Q_OBJECT

public:
    explicit minus(QWidget *parent = nullptr);
    ~minus();
    void sendSlot3();
    QString a;
     Ui::minus *ui;
     QLabel label_2;

signals:
    void mySingnal3();

private slots:
    void on_pushButton_clicked();

private:

};

#endif // MINUS_H
