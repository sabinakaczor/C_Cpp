/********************************************************************************
** Form generated from reading UI file 'gra.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRA_H
#define UI_GRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gra
{
public:
    QFrame *frame_2;
    QLabel *label_nr_2;
    QLabel *label_im_2;
    QLabel *label_nz_2;
    QFrame *frame_3;
    QLabel *label_nr_3;
    QLabel *label_im_3;
    QLabel *label_nz_3;
    QFrame *frame_4;
    QLabel *label_nr_4;
    QLabel *label_im_4;
    QLabel *label_nz_4;
    QFrame *frame;
    QLabel *label_nr;
    QLabel *label_im;
    QLabel *label_nz;
    QLabel *label_kom;
    QPushButton *pushButton;

    void setupUi(QDialog *Gra)
    {
        if (Gra->objectName().isEmpty())
            Gra->setObjectName(QStringLiteral("Gra"));
        Gra->resize(1307, 733);
        frame_2 = new QFrame(Gra);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(750, 310, 201, 201));
        QFont font;
        font.setPointSize(14);
        frame_2->setFont(font);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_nr_2 = new QLabel(frame_2);
        label_nr_2->setObjectName(QStringLiteral("label_nr_2"));
        label_nr_2->setGeometry(QRect(60, 20, 91, 31));
        label_im_2 = new QLabel(frame_2);
        label_im_2->setObjectName(QStringLiteral("label_im_2"));
        label_im_2->setGeometry(QRect(30, 55, 151, 21));
        label_nz_2 = new QLabel(frame_2);
        label_nz_2->setObjectName(QStringLiteral("label_nz_2"));
        label_nz_2->setGeometry(QRect(30, 90, 151, 21));
        frame_3 = new QFrame(Gra);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(1000, 100, 201, 201));
        frame_3->setFont(font);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_nr_3 = new QLabel(frame_3);
        label_nr_3->setObjectName(QStringLiteral("label_nr_3"));
        label_nr_3->setGeometry(QRect(70, 20, 81, 31));
        label_im_3 = new QLabel(frame_3);
        label_im_3->setObjectName(QStringLiteral("label_im_3"));
        label_im_3->setGeometry(QRect(30, 60, 141, 21));
        label_nz_3 = new QLabel(frame_3);
        label_nz_3->setObjectName(QStringLiteral("label_nz_3"));
        label_nz_3->setGeometry(QRect(30, 90, 131, 21));
        frame_4 = new QFrame(Gra);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(1000, 310, 201, 201));
        frame_4->setFont(font);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_nr_4 = new QLabel(frame_4);
        label_nr_4->setObjectName(QStringLiteral("label_nr_4"));
        label_nr_4->setGeometry(QRect(60, 20, 81, 31));
        label_im_4 = new QLabel(frame_4);
        label_im_4->setObjectName(QStringLiteral("label_im_4"));
        label_im_4->setGeometry(QRect(30, 60, 151, 16));
        label_nz_4 = new QLabel(frame_4);
        label_nz_4->setObjectName(QStringLiteral("label_nz_4"));
        label_nz_4->setGeometry(QRect(30, 90, 151, 21));
        frame = new QFrame(Gra);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(750, 100, 201, 201));
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_nr = new QLabel(frame);
        label_nr->setObjectName(QStringLiteral("label_nr"));
        label_nr->setGeometry(QRect(50, 20, 101, 31));
        label_im = new QLabel(frame);
        label_im->setObjectName(QStringLiteral("label_im"));
        label_im->setGeometry(QRect(30, 60, 151, 31));
        label_nz = new QLabel(frame);
        label_nz->setObjectName(QStringLiteral("label_nz"));
        label_nz->setGeometry(QRect(30, 95, 141, 21));
        label_kom = new QLabel(Gra);
        label_kom->setObjectName(QStringLiteral("label_kom"));
        label_kom->setGeometry(QRect(750, 520, 451, 121));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_kom->setFont(font1);
        label_kom->setStyleSheet(QStringLiteral("border-color: rgb(170, 0, 0);"));
        pushButton = new QPushButton(Gra);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(830, 610, 291, 81));
        QFont font2;
        font2.setPointSize(16);
        pushButton->setFont(font2);

        retranslateUi(Gra);

        QMetaObject::connectSlotsByName(Gra);
    } // setupUi

    void retranslateUi(QDialog *Gra)
    {
        label_nr_2->setText(QString());
        label_im_2->setText(QString());
        label_nz_2->setText(QString());
        label_nr_3->setText(QString());
        label_im_3->setText(QString());
        label_nz_3->setText(QString());
        label_nr_4->setText(QString());
        label_im_4->setText(QString());
        label_nz_4->setText(QString());
        label_nr->setText(QString());
        label_im->setText(QString());
        label_nz->setText(QString());
        label_kom->setText(QString());
        pushButton->setText(QApplication::translate("Gra", "Rzucaj kostka", Q_NULLPTR));
        Q_UNUSED(Gra);
    } // retranslateUi

};

namespace Ui {
    class Gra: public Ui_Gra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRA_H
