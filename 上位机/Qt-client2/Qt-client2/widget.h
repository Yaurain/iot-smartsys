#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QPixmap>
#include <QPalette>
#include<QHostAddress>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_connBtn_clicked();
    void connectedSlots();
    void readyReadSlots();

    void on_mainBtn1_clicked();

    void on_mainBtn2_clicked();

    void on_mainquit_clicked();

    void on_secquit_clicked();

    void on_lastquit_clicked();

    void on_LEDOPEN_clicked();

    void on_LEDOFF_clicked();

    void on_BUZZEROPEN_clicked();

    void on_BUZZEROFF_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *socket;

    QString temp;
    QString humi;
    QString yan;
};

#endif // WIDGET_H
