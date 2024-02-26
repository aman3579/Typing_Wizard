/********************************************************************************
** Form generated from reading UI file 'displayresult.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYRESULT_H
#define UI_DISPLAYRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_displayResult
{
public:
    QLabel *label;
    QLabel *result;
    QPushButton *okButton;
    QListWidget *nameList;
    QListWidget *accuracyList;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *scoreList;
    QLabel *label_5;
    QGraphicsView *graphicsView;
    QListWidget *speed;
    QLabel *label_6;
    QLabel *label_7;
    QListWidget *count;

    void setupUi(QDialog *displayResult)
    {
        if (displayResult->objectName().isEmpty())
            displayResult->setObjectName("displayResult");
        displayResult->resize(1026, 685);
        displayResult->setStyleSheet(QString::fromUtf8("QGraphicsView{background-color: #86A3B8;}\n"
"\n"
""));
        label = new QLabel(displayResult);
        label->setObjectName("label");
        label->setGeometry(QRect(300, -10, 591, 141));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        result = new QLabel(displayResult);
        result->setObjectName("result");
        result->setGeometry(QRect(400, 110, 291, 51));
        QFont font1;
        font1.setPointSize(24);
        font1.setUnderline(true);
        result->setFont(font1);
        result->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        okButton = new QPushButton(displayResult);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(470, 490, 191, 51));
        okButton->setCursor(QCursor(Qt::PointingHandCursor));
        okButton->setMouseTracking(true);
        okButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        nameList = new QListWidget(displayResult);
        nameList->setObjectName("nameList");
        nameList->setGeometry(QRect(30, 250, 221, 141));
        QFont font2;
        font2.setPointSize(12);
        nameList->setFont(font2);
        nameList->setLayoutDirection(Qt::LeftToRight);
        nameList->setStyleSheet(QString::fromUtf8("QListWidget{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
"\n"
""));
        accuracyList = new QListWidget(displayResult);
        accuracyList->setObjectName("accuracyList");
        accuracyList->setGeometry(QRect(490, 250, 151, 141));
        accuracyList->setFont(font2);
        accuracyList->setStyleSheet(QString::fromUtf8("QListWidget{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
"\n"
"\n"
"\n"
""));
        label_3 = new QLabel(displayResult);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 200, 101, 31));
        QFont font3;
        font3.setPointSize(18);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        label_4 = new QLabel(displayResult);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(510, 200, 81, 31));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        scoreList = new QListWidget(displayResult);
        scoreList->setObjectName("scoreList");
        scoreList->setGeometry(QRect(690, 250, 141, 141));
        scoreList->setFont(font2);
        scoreList->setStyleSheet(QString::fromUtf8("QListWidget{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
"\n"
"\n"
"\n"
""));
        label_5 = new QLabel(displayResult);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(690, 200, 151, 41));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        graphicsView = new QGraphicsView(displayResult);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-10, -10, 1151, 701));
        graphicsView->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        speed = new QListWidget(displayResult);
        speed->setObjectName("speed");
        speed->setGeometry(QRect(870, 250, 131, 141));
        speed->setStyleSheet(QString::fromUtf8("QListWidget{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
""));
        label_6 = new QLabel(displayResult);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(890, 200, 151, 41));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        label_7 = new QLabel(displayResult);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(290, 210, 171, 31));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        count = new QListWidget(displayResult);
        count->setObjectName("count");
        count->setEnabled(true);
        count->setGeometry(QRect(300, 250, 151, 141));
        count->setFont(font2);
        count->setStyleSheet(QString::fromUtf8("QListWidget{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
"\n"
"\n"
"\n"
""));
        graphicsView->raise();
        label->raise();
        result->raise();
        okButton->raise();
        nameList->raise();
        accuracyList->raise();
        label_3->raise();
        label_4->raise();
        scoreList->raise();
        label_5->raise();
        speed->raise();
        label_6->raise();
        label_7->raise();
        count->raise();

        retranslateUi(displayResult);

        QMetaObject::connectSlotsByName(displayResult);
    } // setupUi

    void retranslateUi(QDialog *displayResult)
    {
        displayResult->setWindowTitle(QCoreApplication::translate("displayResult", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("displayResult", "TYPING WIZARD", nullptr));
        result->setText(QCoreApplication::translate("displayResult", "RESULTS:", nullptr));
        okButton->setText(QCoreApplication::translate("displayResult", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("displayResult", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("displayResult", "Score", nullptr));
        label_5->setText(QCoreApplication::translate("displayResult", "Accuracy", nullptr));
        label_6->setText(QCoreApplication::translate("displayResult", "Speed", nullptr));
        label_7->setText(QCoreApplication::translate("displayResult", "Word Count", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayResult: public Ui_displayResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYRESULT_H
