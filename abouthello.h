#ifndef ABOUTHELLO_H
#define ABOUTHELLO_H

#include <QDialog>

namespace Ui {
class aboutHello;
}

class aboutHello : public QDialog
{
    Q_OBJECT

public:
    explicit aboutHello(QWidget *parent = 0);
    ~aboutHello();

private slots:
    void on_aboutHelloBtn_clicked();

private:
    Ui::aboutHello *ui;
};

#endif // ABOUTHELLO_H
