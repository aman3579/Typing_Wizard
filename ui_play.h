/********************************************************************************
** Form generated from reading UI file 'play.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_play
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *textEdit1;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit3;
    QPushButton *pushButton;
    QRadioButton *easyButton;
    QRadioButton *mediumButton;
    QRadioButton *hardButton;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QDialog *play)
    {
        if (play->objectName().isEmpty())
            play->setObjectName("play");
        play->resize(933, 683);
        graphicsView = new QGraphicsView(play);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-250, -90, 1351, 761));
        graphicsView->setFocusPolicy(Qt::ClickFocus);
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{background-color: #86A3B8;}\n"
"\n"
""));
        label = new QLabel(play);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 165, 341, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        label_3 = new QLabel(play);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 220, 341, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        textEdit1 = new QTextEdit(play);
        textEdit1->setObjectName("textEdit1");
        textEdit1->setGeometry(QRect(630, 170, 41, 31));
        textEdit_3 = new QTextEdit(play);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(990, 540, 31, 31));
        textEdit3 = new QTextEdit(play);
        textEdit3->setObjectName("textEdit3");
        textEdit3->setGeometry(QRect(630, 230, 41, 31));
        pushButton = new QPushButton(play);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(340, 510, 181, 51));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(true);
        pushButton->setTabletTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: white;\n"
"   border-style: solid;\n"
"   border-width: 1px;\n"
"   border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: lightgray;\n"
"}"));
        easyButton = new QRadioButton(play);
        easyButton->setObjectName("easyButton");
        easyButton->setGeometry(QRect(260, 310, 351, 31));
        QFont font2;
        font2.setPointSize(16);
        easyButton->setFont(font2);
        easyButton->setStyleSheet(QString::fromUtf8("QRadioButton{color:rgb(255, 255, 255)}"));
        mediumButton = new QRadioButton(play);
        mediumButton->setObjectName("mediumButton");
        mediumButton->setGeometry(QRect(260, 350, 171, 20));
        mediumButton->setFont(font2);
        mediumButton->setStyleSheet(QString::fromUtf8("QRadioButton{color:rgb(255, 255, 255)}"));
        hardButton = new QRadioButton(play);
        hardButton->setObjectName("hardButton");
        hardButton->setGeometry(QRect(260, 380, 211, 20));
        hardButton->setFont(font2);
        hardButton->setStyleSheet(QString::fromUtf8("QRadioButton{color:rgb(255, 255, 255)}"));
        label_4 = new QLabel(play);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 270, 361, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        label_2 = new QLabel(play);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 20, 381, 71));
        QFont font3;
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setUnderline(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));

        retranslateUi(play);

        QMetaObject::connectSlotsByName(play);
    } // setupUi

    void retranslateUi(QDialog *play)
    {
        play->setWindowTitle(QCoreApplication::translate("play", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("play", "Enter Number of Participants", nullptr));
        label_3->setText(QCoreApplication::translate("play", "Enter the Number of Rounds", nullptr));
        pushButton->setText(QCoreApplication::translate("play", "Submit", nullptr));
        easyButton->setText(QCoreApplication::translate("play", "Easy", nullptr));
        mediumButton->setText(QCoreApplication::translate("play", "Medium", nullptr));
        hardButton->setText(QCoreApplication::translate("play", "Hard", nullptr));
        label_4->setText(QCoreApplication::translate("play", "Choose Difficulty Level", nullptr));
        label_2->setText(QCoreApplication::translate("play", "TYPING WIZARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class play: public Ui_play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
