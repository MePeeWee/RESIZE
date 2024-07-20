#include "mainwindow.h"
#include "ui_mainwindow.h"


extern QString NAME;
extern QString PWD;
QString UsrPwds[10];


////////////////////////////////////////////////////////////////////////////////////////
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CHK_TYPE=RIG_RS;//default startup is a non-test related check RS
    querymodel = new CustomSqlModel();   //::data is subclassed to provide left alignments in cols
  //  querymodel = new QSqlQueryModel(); //::data Not sub-classed

//showMaximized();
    MaxWidth = QApplication::desktop()->width();
    MaxHeight = QApplication::desktop()->height();
        qDebug()<< "Width: " << MaxWidth << '\n'
                << "Height: " << MaxHeight << '\n';

          DynamicFONT = new QFont("Ubuntu",1);

    ui->Act_CHKID_spinBox->setRange(0, 0);
    ui->CID_spinBox->setRange(0, 0);
    ui->Act_PID_spinBox->setRange(0, 0);

    Load_LoginConUsrPwdData();

    ShowBalList();

setACTIVEspinboxes();
}
///////////////////////////////////////////////////
MainWindow::~MainWindow()
{
    delete DynamicFONT;
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
///
/// //////////////////////////////////
/// DASHBOARD BUTTON CONTROL FUNCTIONS
/// //////////////////////////////////
///
/// ////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_BALANCE_LIST_clicked(const QModelIndex &index)
{
    if(index.isValid()){ ui->BALANCE_LIST->selectRow(index.row());
                         SELECTED_ROW=index.row();
                         ui->BALANCE_LIST->selectRow(SELECTED_ROW);
                         ACID=1;}
         else SELECTED_ROW=0;

DataUpdate_NewBalSelectn();
UpDateData();
}
////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
void MainWindow::on_CHKnRS_ChkBx_clicked()
{if(CHKBoxNoProc)return;
    if(ui->CHKnRS_ChkBx->isChecked()){ui->CHKnRS_ChkBx->setChecked(true);CHK_TYPE=RIG_RS;ui->CHKLd_ChkBx->setChecked(false);ui->IsInstlRS_ChkBx->setChecked(false);Update_CHKnDATA();//ui->Context_label->setText("CHKn Context Notes : (RS_DATA_CHKn - Rig Roll Scan Checks - NOT project linked)");
                                     }

     else                            {ui->CHKnRS_ChkBx->setChecked(false);
                                      ui->CHKLd_ChkBx->setChecked(false);ui->IsInstlRS_ChkBx->setChecked(true);CHK_TYPE=INSTALL_RS;Update_INSTLnDATA();//ui->Context_label->setText("INSTLn CHKn Context Notes : (RS_DATA_CHKn - In tunnel Checks - project linked)");
                                     }
DataUpdate_NewBalSelectn();UpDateData();// Use NewBalSelection for checkboxes to ensure all data is captured
}
//////////////////////////////////////////////////////////////////
void MainWindow::on_IsInstlRS_ChkBx_clicked()
{if(CHKBoxNoProc)return;
    if(ui->IsInstlRS_ChkBx->isChecked()){ui->IsInstlRS_ChkBx->setChecked(true);CHK_TYPE=INSTALL_RS;ui->CHKLd_ChkBx->setChecked(false);ui->CHKnRS_ChkBx->setChecked(false);Update_INSTLnDATA();//ui->Context_label->setText("INSTLn CHKn Context Notes : (RS_DATA_CHKn - In tunnel Checks - project linked)");
                                        }

        else                            {ui->IsInstlRS_ChkBx->setChecked(false);
                                         ui->CHKLd_ChkBx->setChecked(false);ui->CHKnRS_ChkBx->setChecked(true);CHK_TYPE=RIG_RS;Update_CHKnDATA();//ui->Context_label->setText("CHKn Context Notes : (RS_DATA_CHKn - Rig Roll Scan Checks - NOT project linked)");
                                         }
DataUpdate_NewBalSelectn();UpDateData();// Use NewBalSelection for checkboxes to ensure all data is captured
}
//////////////////////////////////////////////////////////////////
void MainWindow::on_CHKLd_ChkBx_clicked()
{if(CHKBoxNoProc)return;
    if(ui->CHKLd_ChkBx->isChecked()){ui->CHKLd_ChkBx->setChecked(true);CHK_TYPE=SETS;ui->IsInstlRS_ChkBx->setChecked(false);ui->CHKnRS_ChkBx->setChecked(false);Update_CHKldDATA();//ui->Context_label->setText("CHECK LOAD Context Notes : (INS_CHK_DATA - Discrete Installation load sets - Project linked)");
                                    }

        else                            {ui->IsInstlRS_ChkBx->setChecked(false);
                                         ui->CHKLd_ChkBx->setChecked(true);CHK_TYPE=SETS;ui->CHKnRS_ChkBx->setChecked(false);Update_CHKldDATA();//ui->Context_label->setText("CHECK LOAD Context Notes : (INS_CHK_DATA)  - Discrete Installation load sets - Project linked");
                                         }
DataUpdate_NewBalSelectn();UpDateData();// Use NewBalSelection for checkboxes to ensure all data is captured
}
//////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
void MainWindow::on_Act_PID_spinBox_valueChanged(int arg1)
{if(SpinBoxNoProc){return;}
    Selected_Act_PID_SETS = arg1;
Update_CHKldDATA_PRJchanged();UpDateData();
}
void MainWindow::on_Act_PIDrs_spinBox_valueChanged(int arg1)
{if(SpinBoxNoProc){return;}
    Selected_Act_PID_RS = arg1;
Update_INSTLnDATA_PRJchanged();UpDateData();
}
///////////////////////////////////////////////////////////
void MainWindow::on_Act_CHKnID_spinBox_valueChanged(int arg1)
{if(SpinBoxNoProc){return;}
    CHKn = arg1;
UpDateData();
}
void MainWindow::on_Act_CHKID_spinBox_valueChanged(int arg1)
{if(CHKBoxNoProc)return;
    Selected_Act_CHKID = arg1;
UpDateData();
}
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///
void MainWindow::Load_LoginConUsrPwdData(void)
{
           //  READING OF THE COMBINED USER_PWD AND BALdb CONNECTION FILE CODED FORM.
           /////////////////////////////////////////////////////////////////////////
             QString CUPxFromFile;
           QFile CUPDataFile("/home/peter/Bal_DB_Apps-II/CUsrPx.txt");
             if (!CUPDataFile.open(QIODevice::ReadWrite | QIODevice::Text ))return; //add error msg etc etc...
             QTextStream CUPxStream(&CUPDataFile);
             CUPxFromFile = CUPxStream.readAll();
             QByteArray InCUPData;
             InCUPData = CUPxFromFile.toUtf8();
             for(int i = 0; i < InCUPData.size(); i++)InCUPData[i] = InCUPData[i] ^ key[i % (sizeof(key) / sizeof(char))];
             CUPxFromFile=InCUPData;
           CUPDataFile.close();
             //split into string list
             QStringList ConUsrPwddata;
             ///////////////////////////////////////////////////////
             ConUsrPwddata << CUPxFromFile.split(QRegularExpression("\\s+"));
             ///////////////////////////////////////////////////////

             HostNme= ConUsrPwddata[0];
             DBName = ConUsrPwddata[1];
             PORTval= ConUsrPwddata[2];
             for(int i=3; i<13; i++)
                                    UsrPwds[i-3]=ConUsrPwddata[i];
}
///////////////////////////////////////////////////////////

