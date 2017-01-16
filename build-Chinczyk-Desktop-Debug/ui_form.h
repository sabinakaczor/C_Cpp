/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->setEnabled(true);
        Form->resize(400, 300);
        QFont font;
        font.setPointSize(14);
        Form->setFont(font);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 201, 20));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(140, 80, 120, 80));
        QFont font1;
        font1.setPointSize(12);
        groupBox->setFont(font1);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 20, 117, 22));
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 40, 117, 22));
        radioButton_2->setFont(font1);
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 60, 117, 22));
        radioButton_3->setFont(font1);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 210, 99, 27));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Rejestracja graczy", 0));
        label->setText(QApplication::translate("Form", "     Rejestracja graczy", 0));
        groupBox->setTitle(QApplication::translate("Form", "Liczba graczy:", 0));
        radioButton->setText(QApplication::translate("Form", "1", 0));
        radioButton_2->setText(QApplication::translate("Form", "2", 0));
        radioButton_3->setText(QApplication::translate("Form", "3", 0));
        pushButton->setText(QApplication::translate("Form", "Dalej", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
