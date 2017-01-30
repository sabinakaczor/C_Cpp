/********************************************************************************
** Form generated from reading UI file 'rejestracjagraczy.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REJESTRACJAGRACZY_H
#define UI_REJESTRACJAGRACZY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RejestracjaGraczy
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *start_game;
    QPushButton *add_player;

    void setupUi(QDialog *RejestracjaGraczy)
    {
        if (RejestracjaGraczy->objectName().isEmpty())
            RejestracjaGraczy->setObjectName(QStringLiteral("RejestracjaGraczy"));
        RejestracjaGraczy->resize(602, 394);
        label = new QLabel(RejestracjaGraczy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 201, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableWidget = new QTableWidget(RejestracjaGraczy);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 381, 181));
        start_game = new QPushButton(RejestracjaGraczy);
        start_game->setObjectName(QStringLiteral("start_game"));
        start_game->setGeometry(QRect(380, 310, 201, 61));
        add_player = new QPushButton(RejestracjaGraczy);
        add_player->setObjectName(QStringLiteral("add_player"));
        add_player->setGeometry(QRect(430, 50, 141, 61));

        retranslateUi(RejestracjaGraczy);

        QMetaObject::connectSlotsByName(RejestracjaGraczy);
    } // setupUi

    void retranslateUi(QDialog *RejestracjaGraczy)
    {
        RejestracjaGraczy->setWindowTitle(QApplication::translate("RejestracjaGraczy", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RejestracjaGraczy", "Rejestracja graczy", Q_NULLPTR));
        start_game->setText(QApplication::translate("RejestracjaGraczy", "Dalej", Q_NULLPTR));
        add_player->setText(QApplication::translate("RejestracjaGraczy", "Dodaj gracza", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RejestracjaGraczy: public Ui_RejestracjaGraczy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REJESTRACJAGRACZY_H
