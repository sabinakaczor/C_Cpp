#ifndef PERSONALDIALOG_H
#define PERSONALDIALOG_H

#include <QDialog>

namespace Ui {
class PersonalDialog;
}

class PersonalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PersonalDialog(QWidget *parent = 0);
    ~PersonalDialog();
    int numer() const;
    QString imie() const;
    QString nazwisko() const;
    QString kolor() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::PersonalDialog *ui;

};

#endif // PERSONALDIALOG_H
