/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formWidgetBuy;
    QFormLayout *formLayout;
    QLabel *label_1;
    QPushButton *pushButton_1;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QWidget *formWidgetSell;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_8;
    QListWidget *listWidget;
    QLabel *coin_label;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 380);
        MainWindow->setMinimumSize(QSize(350, 380));
        MainWindow->setMaximumSize(QSize(350, 380));
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow {\n"
"	\n"
"	background-color: rgb(255, 220, 170);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formWidgetBuy = new QWidget(centralwidget);
        formWidgetBuy->setObjectName(QString::fromUtf8("formWidgetBuy"));
        formWidgetBuy->setGeometry(QRect(10, 90, 160, 122));
        formWidgetBuy->setFocusPolicy(Qt::NoFocus);
        formWidgetBuy->setStyleSheet(QString::fromUtf8("#formWidgetBuy {\n"
"	background-color: rgb(255, 255, 207);\n"
"}"));
        formLayout = new QFormLayout(formWidgetBuy);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_1 = new QLabel(formWidgetBuy);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_1);

        pushButton_1 = new QPushButton(formWidgetBuy);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_1);

        label_2 = new QLabel(formWidgetBuy);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formWidgetBuy);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        pushButton_2 = new QPushButton(formWidgetBuy);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(formWidgetBuy);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_3);

        label_7 = new QLabel(formWidgetBuy);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_7->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        formWidgetSell = new QWidget(centralwidget);
        formWidgetSell->setObjectName(QString::fromUtf8("formWidgetSell"));
        formWidgetSell->setGeometry(QRect(180, 90, 160, 122));
        formWidgetSell->setStyleSheet(QString::fromUtf8("#formWidgetSell{\n"
"	background-color: rgb(255, 255, 207);\n"
"}"));
        formLayout_2 = new QFormLayout(formWidgetSell);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(formWidgetSell);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        pushButton_4 = new QPushButton(formWidgetSell);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton_4);

        label_5 = new QLabel(formWidgetSell);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formWidgetSell);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        pushButton_5 = new QPushButton(formWidgetSell);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButton_5);

        pushButton_6 = new QPushButton(formWidgetSell);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, pushButton_6);

        label_8 = new QLabel(formWidgetSell);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 250, 111, 61));
        listWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        listWidget->setTextElideMode(Qt::ElideLeft);
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setSpacing(0);
        listWidget->setGridSize(QSize(2, 18));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setModelColumn(0);
        listWidget->setUniformItemSizes(false);
        listWidget->setSelectionRectVisible(false);
        listWidget->setItemAlignment(Qt::AlignLeading);
        listWidget->setSortingEnabled(true);
        coin_label = new QLabel(centralwidget);
        coin_label->setObjectName(QString::fromUtf8("coin_label"));
        coin_label->setGeometry(QRect(10, 10, 141, 31));
        coin_label->setFont(font);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 50, 161, 51));
        QFont font1;
        font1.setPointSize(12);
        label_10->setFont(font1);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 210, 161, 51));
        label_11->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Clay", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Wood", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tea", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Clay", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Wood", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Tea", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Sell", nullptr));
        coin_label->setText(QCoreApplication::translate("MainWindow", "Coin:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Market", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
