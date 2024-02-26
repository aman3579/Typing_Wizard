/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName("result");
        result->resize(1318, 637);
        graphicsView = new QGraphicsView(result);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-20, -40, 1321, 641));
        label = new QLabel(result);
        label->setObjectName("label");
        label->setGeometry(QRect(200, -20, 361, 81));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label_2 = new QLabel(result);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 70, 201, 41));
        QFont font1;
        font1.setPointSize(26);
        label_2->setFont(font1);
        label_3 = new QLabel(result);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 120, 171, 41));
        QFont font2;
        font2.setPointSize(16);
        label_3->setFont(font2);

        retranslateUi(result);

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QDialog *result)
    {
        result->setWindowTitle(QCoreApplication::translate("result", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("result", "TYPING WIZARD", nullptr));
        label_2->setText(QCoreApplication::translate("result", "RESULTS", nullptr));
        label_3->setText(QCoreApplication::translate("result", "ROUND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
