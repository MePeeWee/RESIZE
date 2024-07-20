/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QPushButton *LoginBtn;
    QLabel *label_LoginTitle;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *UsrNme_label;
    QLineEdit *UsrNme_Edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PSWD_label;
    QLineEdit *PSWD_Edit;
    QPushButton *LoginQuitBtn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->setWindowModality(Qt::WindowModal);
        LoginDialog->resize(469, 365);
        LoginBtn = new QPushButton(LoginDialog);
        LoginBtn->setObjectName(QString::fromUtf8("LoginBtn"));
        LoginBtn->setGeometry(QRect(110, 240, 261, 24));
        label_LoginTitle = new QLabel(LoginDialog);
        label_LoginTitle->setObjectName(QString::fromUtf8("label_LoginTitle"));
        label_LoginTitle->setGeometry(QRect(102, 78, 279, 16));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_LoginTitle->setFont(font);
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 122, 261, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        UsrNme_label = new QLabel(layoutWidget);
        UsrNme_label->setObjectName(QString::fromUtf8("UsrNme_label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        UsrNme_label->setFont(font1);

        horizontalLayout->addWidget(UsrNme_label);

        UsrNme_Edit = new QLineEdit(layoutWidget);
        UsrNme_Edit->setObjectName(QString::fromUtf8("UsrNme_Edit"));

        horizontalLayout->addWidget(UsrNme_Edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PSWD_label = new QLabel(layoutWidget);
        PSWD_label->setObjectName(QString::fromUtf8("PSWD_label"));
        PSWD_label->setFont(font1);

        horizontalLayout_2->addWidget(PSWD_label);

        PSWD_Edit = new QLineEdit(layoutWidget);
        PSWD_Edit->setObjectName(QString::fromUtf8("PSWD_Edit"));
        PSWD_Edit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(PSWD_Edit);


        verticalLayout->addLayout(horizontalLayout_2);

        LoginQuitBtn = new QPushButton(LoginDialog);
        LoginQuitBtn->setObjectName(QString::fromUtf8("LoginQuitBtn"));
        LoginQuitBtn->setGeometry(QRect(112, 280, 257, 24));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        LoginBtn->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        label_LoginTitle->setText(QCoreApplication::translate("LoginDialog", "Input Login Name and Password for BALdb :", nullptr));
        UsrNme_label->setText(QCoreApplication::translate("LoginDialog", "User Name :", nullptr));
        UsrNme_Edit->setText(QCoreApplication::translate("LoginDialog", "peter", nullptr));
        PSWD_label->setText(QCoreApplication::translate("LoginDialog", "  Password :", nullptr));
        PSWD_Edit->setText(QCoreApplication::translate("LoginDialog", "fangs3", nullptr));
        LoginQuitBtn->setText(QCoreApplication::translate("LoginDialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
