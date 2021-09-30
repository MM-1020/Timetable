#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"home.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private:
    Ui::MainWindow *ui;

    QString adminAccount;
    QString adminpasswd;

    home schedule;

/*    QString		AutoLogin;
    QString		RemeberPasswd;
    bool		remeberPasswd;
    bool		autologin;
    void		savecfg();
    void		loadcfg();
*/

    QPoint p;
};

#endif // MAINWINDOW_H
