/********************************************************************************
** Form generated from reading UI file 'addsentence.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSENTENCE_H
#define UI_ADDSENTENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addsentence
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *addsentence)
    {
        if (addsentence->objectName().isEmpty())
            addsentence->setObjectName("addsentence");
        addsentence->resize(791, 404);
        pushButton = new QPushButton(addsentence);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 290, 191, 61));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
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
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        textEdit = new QTextEdit(addsentence);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(190, 120, 451, 121));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
"\n"
""));
        label = new QLabel(addsentence);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 20, 221, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255, 255, 255)}"));
        graphicsView = new QGraphicsView(addsentence);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-5, 1, 811, 401));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{background-color: #86A3B8;}\n"
"\n"
""));
        graphicsView->raise();
        pushButton->raise();
        textEdit->raise();
        label->raise();

        retranslateUi(addsentence);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(addsentence);
    } // setupUi

    void retranslateUi(QDialog *addsentence)
    {
        addsentence->setWindowTitle(QCoreApplication::translate("addsentence", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addsentence", "add sentence", nullptr));
        label->setText(QCoreApplication::translate("addsentence", "Add Sentence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addsentence: public Ui_addsentence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSENTENCE_H
