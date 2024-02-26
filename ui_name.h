/********************************************************************************
** Form generated from reading UI file 'name.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAME_H
#define UI_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_name
{
public:

    void setupUi(QDialog *name)
    {
        if (name->objectName().isEmpty())
            name->setObjectName("name");
        name->resize(780, 412);
        name->setStyleSheet(QString::fromUtf8("QDialog{background-color: #7B8FA1;\n"
"color:rgb(255, 255, 255)}\n"
"\n"
""));

        retranslateUi(name);

        QMetaObject::connectSlotsByName(name);
    } // setupUi

    void retranslateUi(QDialog *name)
    {
        name->setWindowTitle(QCoreApplication::translate("name", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class name: public Ui_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAME_H
