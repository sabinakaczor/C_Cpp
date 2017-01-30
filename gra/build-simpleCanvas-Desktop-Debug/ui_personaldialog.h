/********************************************************************************
** Form generated from reading UI file 'personaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALDIALOG_H
#define UI_PERSONALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *imie;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *nazwisko;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_zo;
    QRadioButton *radioButton_zi;
    QRadioButton *radioButton_cz;
    QRadioButton *radioButton_nie;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *PersonalDialog)
    {
        if (PersonalDialog->objectName().isEmpty())
            PersonalDialog->setObjectName(QStringLiteral("PersonalDialog"));
        PersonalDialog->resize(449, 352);
        buttonBox = new QDialogButtonBox(PersonalDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(240, 280, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(PersonalDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 171, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        layoutWidget = new QWidget(PersonalDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 186, 150));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        imie = new QLineEdit(layoutWidget);
        imie->setObjectName(QStringLiteral("imie"));

        horizontalLayout->addWidget(imie);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        nazwisko = new QLineEdit(layoutWidget);
        nazwisko->setObjectName(QStringLiteral("nazwisko"));

        horizontalLayout_2->addWidget(nazwisko);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_zo = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(PersonalDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_zo);
        radioButton_zo->setObjectName(QStringLiteral("radioButton_zo"));

        verticalLayout->addWidget(radioButton_zo);

        radioButton_zi = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButton_zi);
        radioButton_zi->setObjectName(QStringLiteral("radioButton_zi"));

        verticalLayout->addWidget(radioButton_zi);

        radioButton_cz = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButton_cz);
        radioButton_cz->setObjectName(QStringLiteral("radioButton_cz"));

        verticalLayout->addWidget(radioButton_cz);

        radioButton_nie = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButton_nie);
        radioButton_nie->setObjectName(QStringLiteral("radioButton_nie"));

        verticalLayout->addWidget(radioButton_nie);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        layoutWidget->raise();
        buttonBox->raise();
        label->raise();

        retranslateUi(PersonalDialog);

        QMetaObject::connectSlotsByName(PersonalDialog);
    } // setupUi

    void retranslateUi(QDialog *PersonalDialog)
    {
        PersonalDialog->setWindowTitle(QApplication::translate("PersonalDialog", "Dialog", 0));
        label->setText(QApplication::translate("PersonalDialog", "Dodanie gracza:", 0));
        label_3->setText(QApplication::translate("PersonalDialog", "imie", 0));
        label_4->setText(QApplication::translate("PersonalDialog", "nazwisko", 0));
        label_5->setText(QApplication::translate("PersonalDialog", "kolor", 0));
        radioButton_zo->setText(QApplication::translate("PersonalDialog", "zolty", 0));
        radioButton_zi->setText(QApplication::translate("PersonalDialog", "zielony", 0));
        radioButton_cz->setText(QApplication::translate("PersonalDialog", "czerwony", 0));
        radioButton_nie->setText(QApplication::translate("PersonalDialog", "niebieski", 0));
    } // retranslateUi

};

namespace Ui {
    class PersonalDialog: public Ui_PersonalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALDIALOG_H
