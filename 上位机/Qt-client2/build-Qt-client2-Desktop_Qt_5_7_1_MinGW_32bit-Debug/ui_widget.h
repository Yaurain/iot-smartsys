/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QPushButton *connBtn;
    QWidget *page_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *mainBtn1;
    QPushButton *mainBtn2;
    QPushButton *mainquit;
    QLineEdit *messageedit;
    QWidget *page_3;
    QLabel *label_6;
    QLineEdit *dataedit1;
    QLineEdit *dataedit2;
    QLineEdit *dataedit3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *secquit;
    QWidget *page_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *LEDOPEN;
    QPushButton *LEDOFF;
    QPushButton *BUZZEROPEN;
    QPushButton *BUZZEROFF;
    QPushButton *lastquit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(928, 606);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 40, 731, 511));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 611, 121));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 140, 341, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        connBtn = new QPushButton(page);
        connBtn->setObjectName(QStringLiteral("connBtn"));
        connBtn->setGeometry(QRect(200, 320, 281, 71));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 30, 111, 91));
        label_3->setFont(font);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 230, 151, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 320, 151, 31));
        label_5->setFont(font1);
        mainBtn1 = new QPushButton(page_2);
        mainBtn1->setObjectName(QStringLiteral("mainBtn1"));
        mainBtn1->setGeometry(QRect(380, 230, 211, 51));
        mainBtn2 = new QPushButton(page_2);
        mainBtn2->setObjectName(QStringLiteral("mainBtn2"));
        mainBtn2->setGeometry(QRect(380, 310, 211, 51));
        mainquit = new QPushButton(page_2);
        mainquit->setObjectName(QStringLiteral("mainquit"));
        mainquit->setGeometry(QRect(490, 430, 171, 61));
        messageedit = new QLineEdit(page_2);
        messageedit->setObjectName(QStringLiteral("messageedit"));
        messageedit->setGeometry(QRect(210, 130, 271, 41));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 40, 421, 111));
        label_6->setFont(font);
        dataedit1 = new QLineEdit(page_3);
        dataedit1->setObjectName(QStringLiteral("dataedit1"));
        dataedit1->setGeometry(QRect(260, 150, 321, 31));
        dataedit2 = new QLineEdit(page_3);
        dataedit2->setObjectName(QStringLiteral("dataedit2"));
        dataedit2->setGeometry(QRect(260, 220, 321, 31));
        dataedit3 = new QLineEdit(page_3);
        dataedit3->setObjectName(QStringLiteral("dataedit3"));
        dataedit3->setGeometry(QRect(260, 290, 321, 31));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 160, 51, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 220, 51, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 280, 101, 31));
        label_9->setFont(font1);
        secquit = new QPushButton(page_3);
        secquit->setObjectName(QStringLiteral("secquit"));
        secquit->setGeometry(QRect(490, 430, 171, 61));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(220, 40, 321, 91));
        label_10->setFont(font);
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 210, 111, 41));
        label_11->setFont(font1);
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(450, 215, 91, 31));
        label_12->setFont(font1);
        LEDOPEN = new QPushButton(page_4);
        LEDOPEN->setObjectName(QStringLiteral("LEDOPEN"));
        LEDOPEN->setGeometry(QRect(20, 270, 121, 51));
        LEDOFF = new QPushButton(page_4);
        LEDOFF->setObjectName(QStringLiteral("LEDOFF"));
        LEDOFF->setGeometry(QRect(170, 270, 131, 51));
        BUZZEROPEN = new QPushButton(page_4);
        BUZZEROPEN->setObjectName(QStringLiteral("BUZZEROPEN"));
        BUZZEROPEN->setGeometry(QRect(360, 270, 121, 51));
        BUZZEROFF = new QPushButton(page_4);
        BUZZEROFF->setObjectName(QStringLiteral("BUZZEROFF"));
        BUZZEROFF->setGeometry(QRect(510, 270, 131, 51));
        lastquit = new QPushButton(page_4);
        lastquit->setObjectName(QStringLiteral("lastquit"));
        lastquit->setGeometry(QRect(490, 430, 171, 61));
        stackedWidget->addWidget(page_4);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\262\263\345\215\227\347\247\221\346\212\200\345\255\246\351\231\242\342\200\224\342\200\224\347\211\251\350\201\224\347\275\221181\347\254\254\345\215\201\347\273\204\346\231\272\350\203\275\345\256\266\345\261\205", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\347\273\204\345\221\230\357\274\232\345\274\240\345\215\232  \347\216\213\346\265\251\345\215\232  \350\226\233\345\272\206\350\264\272  \350\221\243\344\270\226\351\276\231 \345\210\230\345\256\266\345\250\201", Q_NULLPTR));
        connBtn->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\350\277\233\345\205\245", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\344\270\273\351\241\265\351\235\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\347\225\214\351\235\242", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\346\231\272\350\203\275\345\256\266\345\261\205\347\225\214\351\235\242", Q_NULLPTR));
        mainBtn1->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\350\277\233\345\205\245", Q_NULLPTR));
        mainBtn2->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\350\277\233\345\205\245", Q_NULLPTR));
        mainquit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\346\270\251\346\271\277\345\272\246\343\200\201\347\203\237\351\233\276\346\265\223\345\272\246\346\225\260\346\215\256\346\237\245\347\234\213", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\346\270\251\345\272\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\346\271\277\345\272\246", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\347\203\237\351\233\276\346\265\223\345\272\246", Q_NULLPTR));
        secquit->setText(QApplication::translate("Widget", "\350\277\224\345\233\236", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\346\231\272\350\203\275\345\256\266\345\205\267\346\216\247\345\210\266\347\225\214\351\235\242", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\346\231\272\350\203\275\345\260\217\347\201\257", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "\346\231\272\350\203\275\351\237\263\345\223\215", Q_NULLPTR));
        LEDOPEN->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", Q_NULLPTR));
        LEDOFF->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
        BUZZEROPEN->setText(QApplication::translate("Widget", "\351\237\263\344\271\2201", Q_NULLPTR));
        BUZZEROFF->setText(QApplication::translate("Widget", "\351\237\263\344\271\2202", Q_NULLPTR));
        lastquit->setText(QApplication::translate("Widget", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
