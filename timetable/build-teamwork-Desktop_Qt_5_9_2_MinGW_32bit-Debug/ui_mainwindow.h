/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QLabel *imagelabel;
    QLineEdit *passEdit;
    QLineEdit *accountEdit;
    QPushButton *logButton;
    QLabel *ayslabel;
    QLabel *pyslabel;
    QLabel *label;
    QPushButton *zuixiaohua;
    QPushButton *closed;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(744, 486);
        MainWindow->setStyleSheet(QLatin1String("\n"
"QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:16px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"	font: 11pt \"Arial\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(135,206,235);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QLabel{\n"
"background:rgba(85,170,255,0);\n"
"color:rgb(0,0,128);\n"
"font-style:MingLiU-ExtB;\n"
"font-size:14px;\n"
"	font: italic 10pt \"Lucida Fax\";\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 751, 451));
        imagelabel = new QLabel(widget);
        imagelabel->setObjectName(QStringLiteral("imagelabel"));
        imagelabel->setGeometry(QRect(-100, -60, 741, 441));
        passEdit = new QLineEdit(widget);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(170, 180, 281, 51));
        accountEdit = new QLineEdit(widget);
        accountEdit->setObjectName(QStringLiteral("accountEdit"));
        accountEdit->setGeometry(QRect(170, 110, 281, 51));
        logButton = new QPushButton(widget);
        logButton->setObjectName(QStringLiteral("logButton"));
        logButton->setGeometry(QRect(240, 260, 151, 31));
        ayslabel = new QLabel(widget);
        ayslabel->setObjectName(QStringLiteral("ayslabel"));
        ayslabel->setGeometry(QRect(480, 120, 72, 15));
        pyslabel = new QLabel(widget);
        pyslabel->setObjectName(QStringLiteral("pyslabel"));
        pyslabel->setGeometry(QRect(480, 200, 72, 15));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 9, 211, 41));
        zuixiaohua = new QPushButton(widget);
        zuixiaohua->setObjectName(QStringLiteral("zuixiaohua"));
        zuixiaohua->setGeometry(QRect(540, 10, 21, 21));
        closed = new QPushButton(widget);
        closed->setObjectName(QStringLiteral("closed"));
        closed->setGeometry(QRect(580, 10, 21, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 744, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        imagelabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        passEdit->setPlaceholderText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        accountEdit->setPlaceholderText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        logButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        ayslabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pyslabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        zuixiaohua->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        closed->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
