/********************************************************************************
** Form generated from reading UI file 'rejestracja.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REJESTRACJA_H
#define UI_REJESTRACJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Rejestracja
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *Rejestracja)
    {
        if (Rejestracja->objectName().isEmpty())
            Rejestracja->setObjectName(QStringLiteral("Rejestracja"));
        Rejestracja->resize(400, 300);
        buttonBox = new QDialogButtonBox(Rejestracja);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        groupBox = new QGroupBox(Rejestracja);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 161, 91));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(0, 20, 117, 22));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(0, 40, 117, 22));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(0, 60, 117, 22));

        retranslateUi(Rejestracja);
        QObject::connect(buttonBox, SIGNAL(accepted()), Rejestracja, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Rejestracja, SLOT(reject()));

        QMetaObject::connectSlotsByName(Rejestracja);
    } // setupUi

    void retranslateUi(QDialog *Rejestracja)
    {
        Rejestracja->setWindowTitle(QApplication::translate("Rejestracja", "Rejestracja graczy", 0));
        groupBox->setTitle(QApplication::translate("Rejestracja", "Podaj liczb\304\231 graczy:", 0));
        radioButton->setText(QApplication::translate("Rejestracja", "2", 0));
        radioButton_2->setText(QApplication::translate("Rejestracja", "3", 0));
        radioButton_3->setText(QApplication::translate("Rejestracja", "4", 0));
    } // retranslateUi

};

namespace Ui {
    class Rejestracja: public Ui_Rejestracja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REJESTRACJA_H
