#include <QMainWindow>
#include "mainwindow.h"
#include "logindialog.h"
#include "ui_logindialog.h"

extern QString NAME;
extern QString PWD;
extern bool PASSWORDisVALID;
extern bool PleaseQuit;
extern QString UsrPwds[10];
////////////////////////////////////////////////////////////
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}
////////////////////////////////////////////////////////////
LoginDialog::~LoginDialog()
{
    delete ui;
}
////////////////////////////////////////////////////////////
void LoginDialog::on_LoginBtn_clicked()
{
NAME=ui->UsrNme_Edit->text();
PWD =ui->PSWD_Edit->text();

QString CatNmePwd;
CatNmePwd = NAME+"_"+PWD;
PASSWORDisVALID=false;

for(int i=0;i<10;i++) if(CatNmePwd==UsrPwds[i])PASSWORDisVALID=true;

if(PASSWORDisVALID)   close();
                else {QMessageBox::information(this,"Login","User Name and Password is NOT CORRECT for BALdb");
                                            PASSWORDisVALID=false;
                     }
}
////////////////////////////////////////////////////////////
void LoginDialog::on_LoginQuitBtn_clicked()
{
  PleaseQuit=true;close();
}
////////////////////////////////////////////////////////////
