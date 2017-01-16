#include "form.h"

namespace Ui {
class form;
}

class form : public QMainWindow
{
    Q_OBJECT

public:
    explicit form(QWidget *parent = 0);
    ~form();

private slots:
    //void paintEvent(QPaintEvent *event);

    //void on_button_start_clicked();

private:
    Ui::form *ui;
    //bool clicked;
};

