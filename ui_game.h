/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *Player_name;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextEdit *textEditans;
    QLabel *Round_name;
    QPushButton *submitButton;
    QPushButton *custombutton;
    QPushButton *custom;

    void setupUi(QDialog *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(1023, 685);
        graphicsView = new QGraphicsView(Game);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-40, -70, 1361, 761));
        QFont font;
        font.setPointSize(36);
        graphicsView->setFont(font);
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{background-color: #86A3B8;}\n"
"\n"
""));
        label = new QLabel(Game);
        label->setObjectName("label");
        label->setGeometry(QRect(263, 29, 551, 61));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        Player_name = new QLabel(Game);
        Player_name->setObjectName("Player_name");
        Player_name->setGeometry(QRect(80, 120, 331, 61));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        Player_name->setFont(font2);
        Player_name->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        textBrowser = new QTextBrowser(Game);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 180, 781, 192));
        QFont font3;
        font3.setPointSize(12);
        textBrowser->setFont(font3);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextEdit{background-color:  rgb(254,254,244)\n"
"color:rgb(255, 255, 255)\n"
"}"));
        label_3 = new QLabel(Game);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 390, 161, 31));
        QFont font4;
        font4.setPointSize(18);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        textEditans = new QTextEdit(Game);
        textEditans->setObjectName("textEditans");
        textEditans->setGeometry(QRect(80, 440, 781, 171));
        textEditans->setFont(font3);
        textEditans->setStyleSheet(QString::fromUtf8("QTextEdit{background-color:  rgb(254,254,244)\n"
"color:rgb(255, 255, 255)\n"
"}\n"
"\n"
""));
        Round_name = new QLabel(Game);
        Round_name->setObjectName("Round_name");
        Round_name->setGeometry(QRect(430, 80, 371, 91));
        QFont font5;
        font5.setPointSize(22);
        Round_name->setFont(font5);
        Round_name->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        submitButton = new QPushButton(Game);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(570, 620, 201, 51));
        submitButton->setFont(font3);
        submitButton->setCursor(QCursor(Qt::PointingHandCursor));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: white;\n"
"   border-style: solid;\n"
"   border-width: 1px;\n"
"   border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: lightgray;\n"
"}"));
        custombutton = new QPushButton(Game);
        custombutton->setObjectName("custombutton");
        custombutton->setGeometry(QRect(360, 620, 191, 51));
        custombutton->setCursor(QCursor(Qt::PointingHandCursor));
        custombutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        custom = new QPushButton(Game);
        custom->setObjectName("custom");
        custom->setGeometry(QRect(330, 620, 231, 51));
        custom->setFont(font3);
        custom->setCursor(QCursor(Qt::PointingHandCursor));
        custom->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: white;\n"
"   border-style: solid;\n"
"   border-width: 1px;\n"
"   border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: lightgray;\n"
"}"));

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QDialog *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Game", "TYPING WIZARD", nullptr));
        Player_name->setText(QCoreApplication::translate("Game", "Players Turn:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Game", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Game", "Type Below:", nullptr));
        textEditans->setHtml(QCoreApplication::translate("Game", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Round_name->setText(QCoreApplication::translate("Game", "ROUND 1", nullptr));
        submitButton->setText(QCoreApplication::translate("Game", "submit", nullptr));
        custombutton->setText(QCoreApplication::translate("Game", "click for custom sentence", nullptr));
        custom->setText(QCoreApplication::translate("Game", "custom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
