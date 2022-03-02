#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);

    QPixmap pixmap1 = QPixmap(":/image/picture/00.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background,QBrush(pixmap1));
    this->setPalette(palette);

    //当连接服务器成功时会有一个叫做connected()的信号产生
    connect(socket,SIGNAL(connected()),this,SLOT(connectedSlots()));
    //当有数据可读时，会产生一个readyRead()
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyReadSlots()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::connectedSlots()
{
    ui->messageedit->setText("连接服务器成功！");
}
void Widget::readyReadSlots()
{
    QByteArray array = socket->readAll();
    QString str(array);
    temp = str.section('#',1,1);
    ui->dataedit1->setText(temp);
    humi = str.section('#',2,2);
    ui->dataedit2->setText(humi);
    yan = str.section('#',3,3);
    ui->dataedit3->setText(yan);
}

void Widget::on_connBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
    QPixmap pixmap2 = QPixmap(":/image/picture/01.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background,QBrush(pixmap2));
    this->setPalette(palette);
    socket->connectToHost(QHostAddress("192.168.137.59"),8266);

}

void Widget::on_mainBtn1_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
    QPixmap pixmap3 = QPixmap(":/image/picture/02.jpg").scaled(this->size());
     //调色板的类声明一个对象
     QPalette palette(this->palette());
     //用palette这个对象访问刷子，并且给刷子进行赋值
     palette.setBrush(QPalette::Background,QBrush(pixmap3));
     //启动刷背景模式
     this->setPalette(palette);
}

void Widget::on_mainBtn2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);
    QPixmap pixmap4 = QPixmap(":/image/picture/03.jpg").scaled(this->size());
     //调色板的类声明一个对象
     QPalette palette(this->palette());
     //用palette这个对象访问刷子，并且给刷子进行赋值
     palette.setBrush(QPalette::Background,QBrush(pixmap4));
     //启动刷背景模式
     this->setPalette(palette);
}

void Widget::on_mainquit_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
    QPixmap pixmap1 = QPixmap(":/image/picture/00.jpg").scaled(this->size());
     //调色板的类声明一个对象
     QPalette palette(this->palette());
     //用palette这个对象访问刷子，并且给刷子进行赋值
     palette.setBrush(QPalette::Background,QBrush(pixmap1));
     //启动刷背景模式
     this->setPalette(palette);
}

void Widget::on_secquit_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
    QPixmap pixmap2 = QPixmap(":/image/picture/01.jpg").scaled(this->size());
     //调色板的类声明一个对象
     QPalette palette(this->palette());
     //用palette这个对象访问刷子，并且给刷子进行赋值
     palette.setBrush(QPalette::Background,QBrush(pixmap2));
     //启动刷背景模式
     this->setPalette(palette);
}

void Widget::on_lastquit_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
    QPixmap pixmap2 = QPixmap(":/image/picture/01.jpg").scaled(this->size());
     //调色板的类声明一个对象
     QPalette palette(this->palette());
     //用palette这个对象访问刷子，并且给刷子进行赋值
     palette.setBrush(QPalette::Background,QBrush(pixmap2));
     //启动刷背景模式
     this->setPalette(palette);
}

void Widget::on_LEDOPEN_clicked()
{
    QString str ="OpenLed";
    QByteArray array;
    array.append(str);
    socket->write(array);
}

void Widget::on_LEDOFF_clicked()
{
    QString str = "CloseLed";
    QByteArray array;
    array.append(str);
    socket->write(array);
}

void Widget::on_BUZZEROPEN_clicked()
{
    QString str = "OpenBUZ";
    QByteArray array;
    array.append(str);
    socket->write(array);
}

void Widget::on_BUZZEROFF_clicked()
{
    QString str = "CloseBuz";
    QByteArray array;
    array.append(str);
    socket->write(array);
}
