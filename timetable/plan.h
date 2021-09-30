#ifndef PLAN_H
#define PLAN_H

#include <QWidget>

namespace Ui {
class plan;
}

class plan : public QWidget
{
    Q_OBJECT

public:
    explicit plan(QWidget *parent = nullptr);
    ~plan();

private:
    Ui::plan *ui;
};

#endif // PLAN_H
