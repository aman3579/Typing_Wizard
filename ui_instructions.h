/********************************************************************************
** Form generated from reading UI file 'instructions.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONS_H
#define UI_INSTRUCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_instructions
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QPushButton *continue_instruction;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *instructions)
    {
        if (instructions->objectName().isEmpty())
            instructions->setObjectName("instructions");
        instructions->resize(1024, 718);
        graphicsView = new QGraphicsView(instructions);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-290, -60, 1361, 931));
        QFont font;
        font.setPointSize(8);
        graphicsView->setFont(font);
        graphicsView->setMouseTracking(false);
        graphicsView->setAutoFillBackground(true);
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{background-color: #86A3B8;}\n"
"\n"
""));
        label = new QLabel(instructions);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 0, 521, 141));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        label_2 = new QLabel(instructions);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 571, 51));
        QFont font2;
        font2.setPointSize(18);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        continue_instruction = new QPushButton(instructions);
        continue_instruction->setObjectName("continue_instruction");
        continue_instruction->setGeometry(QRect(480, 650, 181, 51));
        continue_instruction->setCursor(QCursor(Qt::PointingHandCursor));
        continue_instruction->setMouseTracking(true);
        continue_instruction->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        textBrowser = new QTextBrowser(instructions);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(60, 200, 941, 431));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(123, 143, 161, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        textBrowser->setPalette(palette);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)\n"
"}\n"
"\n"
""));

        retranslateUi(instructions);

        QMetaObject::connectSlotsByName(instructions);
    } // setupUi

    void retranslateUi(QDialog *instructions)
    {
        instructions->setWindowTitle(QCoreApplication::translate("instructions", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("instructions", "TYPING WIZARD", nullptr));
        label_2->setText(QCoreApplication::translate("instructions", "Read the instructions given below carefully:", nullptr));
        continue_instruction->setText(QCoreApplication::translate("instructions", "Continue", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("instructions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> INSTRUCTIONS:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">1)At the s"
                        "tart of each round a sentence (difficulty level: will be shown on your screen.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">2)Participants take turns one by one. The order remains same for every round.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">3)Each participant has to type 'READY' (case-sensitive and without the inverted commas) and press the 'ENTER' key to start his timer.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">4)Each participant (on their turn) can see the sentence they have to type before their timer has started and once done, they can press any key to start typing and the timer starts automatically.</span></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> 5)After that, once finished, press 'ENTER' key to end the timer and hence the turn.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">         </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">    Read the scoring &amp; ranking rules carefully.       </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; text-decoration: underline;\">SCORING &amp; RANKING:"
                        " </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">1)Score of a participant is equal to: A/B (i.e. A divided by B)             </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> where: A = number of characters in their correct place in the participant's input sentence and if that number's less than 50% of total number of characters in the given sentence then it gets reduced to zero and hence the net score.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> B = time taken by the participant to type in seconds </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" "
                        "font-size:11pt;\"> 2)Ofcourse, the participant with higher score gets better rank.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\"> 3)But in case of a tie, tie breakers used are (in order):</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">	  (i)  Average Accuracy</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">  	(ii) Average Speed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">  	(iii)Maximum Score</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><s"
                        "pan style=\" font-size:11pt;\">  	(iv) If the tie's still not broken, 4th criteria is your luck!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">and once done, type 'START' &amp; press the 'ENTER' key to continue...</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">NOTE: Speed will be the winning parameter</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instructions: public Ui_instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H
