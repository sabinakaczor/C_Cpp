/********************************************************************************
** Form generated from reading UI file 'rejestracja.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Rejestracja
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *getPlayersQty;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QRadioButton *radioButton4;
    QPushButton *setPlayersQty;
    QListWidget *listWidget;

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
        getPlayersQty = new QGroupBox(Rejestracja);
        getPlayersQty->setObjectName(QStringLiteral("getPlayersQty"));
        getPlayersQty->setGeometry(QRect(60, 30, 161, 91));
        radioButton2 = new QRadioButton(getPlayersQty);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(0, 20, 117, 22));
        radioButton3 = new QRadioButton(getPlayersQty);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setGeometry(QRect(0, 40, 117, 22));
        radioButton4 = new QRadioButton(getPlayersQty);
        radioButton4->setObjectName(QStringLiteral("radioButton4"));
        radioButton4->setGeometry(QRect(0, 60, 117, 22));
        setPlayersQty = new QPushButton(Rejestracja);
        setPlayersQty->setObjectName(QStringLiteral("setPlayersQty"));
        setPlayersQty->setGeometry(QRect(240, 70, 51, 27));
        listWidget = new QListWidget(Rejestracja);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(60, 120, 231, 81));

        retranslateUi(Rejestracja);
        QObject::connect(buttonBox, SIGNAL(accepted()), Rejestracja, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Rejestracja, SLOT(reject()));

        QMetaObject::connectSlotsByName(Rejestracja);
    } // setupUi

    void retranslateUi(QDialog *Rejestracja)
    {
        Rejestracja->setWindowTitle(QApplication::translate("Rejestracja", "Rejestracja graczy", 0));
        getPlayersQty->setTitle(QApplication::translate("Rejestracja", "Podaj liczb\304\231 graczy:", 0));
        radioButton2->setText(QApplication::translate("Rejestracja", "2", 0));
        radioButton3->setText(QApplication::translate("Rejestracja", "3", 0));
        radioButton4->setText(QApplication::translate("Rejestracja", "4", 0));
        setPlayersQty->setText(QApplication::translate("Rejestracja", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Rejestracja: public Ui_Rejestracja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REJESTRACJA_H
