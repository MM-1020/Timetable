#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class Form;
}

class home : public QMainWindow
{
    Q_OBJECT
public:
    explicit home(QWidget *parent = nullptr);


private:
    Ui::Form *ff;


signals:

public slots:
};

#endif // HOME_H
