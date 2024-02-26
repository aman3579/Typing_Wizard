/****************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *play_button;
    QPushButton *add_sentence_button;
    QPushButton *exit_button;
    QFrame *frame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1345, 752);
        QFont font;
        font.setFamilies({QString::fromUtf8("Nine Tsuki")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-220, -80, 1631, 781));
        QPalette palette;
        QBrush brush(QColor(134, 163, 184, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        graphicsView->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        font1.setUnderline(true);
        graphicsView->setFont(font1);
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        graphicsView->setMouseTracking(true);
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{background-color: #86A3B8;}\n"
"\n"
""));
        graphicsView->setLineWidth(1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 60, 1111, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(48);
        font2.setUnderline(false);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        play_button = new QPushButton(centralwidget);
        play_button->setObjectName("play_button");
        play_button->setGeometry(QRect(480, 240, 301, 51));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        play_button->setPalette(palette1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(12);
        play_button->setFont(font3);
        play_button->setCursor(QCursor(Qt::PointingHandCursor));
        play_button->setMouseTracking(true);
        play_button->setAutoFillBackground(false);
        play_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: white;\n"
"   border-style: solid;\n"
"   border-width: 1px;\n"
"   border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: lightgray;\n"
"}\n"
""));
        add_sentence_button = new QPushButton(centralwidget);
        add_sentence_button->setObjectName("add_sentence_button");
        add_sentence_button->setGeometry(QRect(480, 400, 301, 51));
        add_sentence_button->setFont(font3);
        add_sentence_button->setCursor(QCursor(Qt::PointingHandCursor));
        add_sentence_button->setMouseTracking(true);
        add_sentence_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: white;\n"
"   border-style: solid;\n"
"   border-width: 1px;\n"
"   border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: lightgray;\n"
"}"));
        exit_button = new QPushButton(centralwidget);
        exit_button->setObjectName("exit_button");
        exit_button->setGeometry(QRect(480, 320, 301, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        exit_button->setPalette(palette2);
        exit_button->setFont(font3);
        exit_button->setCursor(QCursor(Qt::PointingHandCursor));
        exit_button->setMouseTracking(true);
        exit_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: white;\n"
"   border-style: solid;\n"
"   border-width: 1px;\n"
"   border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: lightgray;\n"
"}\n"
" "));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(210, 320, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1345, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "WELCOME TO TYPING WIZARD", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "PLAY", nullptr));
        add_sentence_button->setText(QCoreApplication::translate("MainWindow", "ADD A SENTENCE", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
