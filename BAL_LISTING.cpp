#include "mainwindow.h"
#include "ui_mainwindow.h"

//test mod for Git Test
//In Qt Create and test SSH key
QString NAME;
QString PWD;
bool PASSWORDisVALID=false;
bool PleaseQuit=false;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////DISPLAY OF BALANCE LIST DEPENDING ON FILTER SETTINGS ////////////////////////////////////////////////////////////////////////////////////////////////////////
//// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::ShowBalList(void)
{
    QString BALincl_zeroQRY;
    QString BALexcl_zeroQRY;
    QString Q1,Q2;

    UsrInput_NAMEandPWD();

    if(db.open())
     {
                                              //ASSEMBLE SQL QUERY STRING FOR TABLE DEPENDING ON FLAG SETTINGS. 0=ALL, 1=CALIBRATED_ONLY, 2=6-COMP ONLY
                                              /////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                 if(BAL_LIST_FILTER==0){BALincl_zeroQRY  = "SELECT BID,BALNAME,DIAM,NFd_MAX,PMd_MAX,SFd_MAX,YMd_MAX,RMd_MAX,AFd_MAX,DESTYPE,CPNTS,GTYPE FROM BALANCES ";
                                                                        BALexcl_zeroQRY  = "SELECT BID,BALNAME,DIAM,NFd_MAX,PMd_MAX,SFd_MAX,YMd_MAX,RMd_MAX,AFd_MAX,DESTYPE,CPNTS,GTYPE FROM BALANCES WHERE ";
                                                                       }
                                                 if(BAL_LIST_FILTER==1){BALincl_zeroQRY  = "SELECT DISTINCT BID,BALNAME,DIAM,NFd_MAX,PMd_MAX,SFd_MAX,YMd_MAX,RMd_MAX,AFd_MAX,DESTYPE,CPNTS,GTYPE FROM CAL_ONLY ";
                                                                        BALexcl_zeroQRY  = "SELECT DISTINCT BID,BALNAME,DIAM,NFd_MAX,PMd_MAX,SFd_MAX,YMd_MAX,RMd_MAX,AFd_MAX,DESTYPE,CPNTS,GTYPE FROM CAL_ONLY WHERE ";
                                                                       }
                                                 if(BAL_LIST_FILTER==2){BALincl_zeroQRY  = "SELECT BID,BALNAME,DIAM,NFd_MAX,PMd_MAX,SFd_MAX,YMd_MAX,RMd_MAX,AFd_MAX,DESTYPE,CPNTS,GTYPE FROM 6D_ONLY ";
                                                                        BALexcl_zeroQRY  = "SELECT BID,BALNAME,DIAM,NFd_MAX,PMd_MAX,SFd_MAX,YMd_MAX,RMd_MAX,AFd_MAX,DESTYPE,CPNTS,GTYPE FROM 6D_ONLY WHERE ";
                                                                       }
                                               QString dbItem;
                                               switch(SORTon){case 0:dbItem="NFd_MAX";break;
                                                              case 1:dbItem="PMd_MAX";break;
                                                              case 2:dbItem="SFd_MAX";break;
                                                              case 3:dbItem="YMd_MAX";break;
                                                              case 4:dbItem="RMd_MAX";break;
                                                              case 5:dbItem="AFd_MAX";break;
                                                              case 6:dbItem="DIAM";break;
                                                              case 7:dbItem="BID";break;
                                                               default:break;
                                                             }
                                               QString SORTtypeASC = " ASC";       //Ascending
                                               QString SORTtypeDSC = " DESC";      //Decending
                                               QString Excl_Zero = ">0 ORDER BY ";
                                               QString Incl_Zero = " ORDER BY ";
                                               QString QUERYstrng = "";

                                                       if(SORT==0){//Sort Decending
                                                                    if(EXCL_Z)  QUERYstrng = BALexcl_zeroQRY + dbItem + Excl_Zero + dbItem + SORTtypeDSC;
                                                                       else     QUERYstrng = BALincl_zeroQRY + Incl_Zero + dbItem + SORTtypeDSC;
                                                                  }
                                                            else  {//Sort Ascending
                                                                    if(EXCL_Z)  QUERYstrng = BALexcl_zeroQRY + dbItem + Excl_Zero + dbItem + SORTtypeASC;
                                                                       else     QUERYstrng = BALincl_zeroQRY + Incl_Zero + dbItem + SORTtypeASC;
                                                                 }
                                              // END ASSEMBLY OF QUERY///////////////////////////////////////////////////////////////////////////////
                                              ///////////////////////////////////////////////////////////////////////////////////////////////////////

           ////QUERY BALdb and SHOW TABLE/////////////////////////
           querymodel->setQuery(QUERYstrng,db);
           ui->BALANCE_LIST->setModel(querymodel);
           ui->BALANCE_LIST->show();
           ////END TABLE LISTING///////////////////////////////////

      db.close();
     }//end if DBOpen()

  else   {QMessageBox::information(this,"Login","Could not open BALdb. Please check with administator.");
          exit(0);
          qDebug()<<"Error = "<< db.lastError();
         }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// RESPONSES TO CHANGES IN BALANCE TABLE FILTER SETTINGS ///////////////////////////////////////////////////////////////////////////////////////////////////////
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_ALL_Btn_clicked()
{if(ui->ALL_Btn->isChecked()){BAL_LIST_FILTER=0; SELECTED_ROW=0;
        ShowBalList();
       }
}
void MainWindow::on_CALIBd_Btn_clicked()
{if(ui->CALIBd_Btn->isChecked()){BAL_LIST_FILTER=1; SELECTED_ROW=0;
                              ShowBalList();
                             }
}
void MainWindow::on_D6_Only_Btn_clicked()
{if(ui->D6_Only_Btn->isChecked()){BAL_LIST_FILTER=2; SELECTED_ROW=0;
        ShowBalList();
       }
}
///////////////////////////////////////////////////////////////////
void MainWindow::on_BID_RBtn_clicked()
{
 SORTon=7;ShowBalList();
}
void MainWindow::on_NF_RBtn_clicked()
{
SORTon=0;ShowBalList();
}
void MainWindow::on_PM_RBtn_clicked()
{
SORTon=1;ShowBalList();
}
void MainWindow::on_SF_RBtn_clicked()
{
SORTon=2;ShowBalList();
}
void MainWindow::on_YM_RBtn_clicked()
{
SORTon=3;ShowBalList();
}
void MainWindow::on_RM_RBtn_clicked()
{
SORTon=4;ShowBalList();
}
void MainWindow::on_AF_RBtn_clicked()
{
SORTon=5;ShowBalList();
}
void MainWindow::on_Dia_RBtn_clicked()
{
SORTon=6;ShowBalList();
}
//////////////////////////////////////////////////////////////////
void MainWindow::on_ShowZRO_ChkBx_clicked()
{
   if(EXCL_Z) EXCL_Z=false; else EXCL_Z=true;ShowBalList();
}
//////////////////////////////////////////////////////////////////
void MainWindow::on_Asc_RBtn_clicked()
{
SELECTED_ROW=0;  SORT =1; ShowBalList();
}
void MainWindow::on_Dec_RBtn_clicked()
{
SELECTED_ROW=0;  SORT =0; ShowBalList();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MainWindow::UsrInput_NAMEandPWD(void)
{
    /////////////////////////////////PASSWORD LOGIN CHECK////////////////////
    if(!PASSWORDisVALID){LoginDlgWin=new LoginDialog(this);}
    while(!PASSWORDisVALID){  LoginDlgWin->exec(); if(PleaseQuit)exit(0);
                              db = QSqlDatabase::addDatabase("QMYSQL","CONN1");
                              db.setHostName(HostNme);
                              db.setUserName(NAME);
                              db.setPassword(PWD);
                              db.setDatabaseName(DBName);
                              db.setPort(PORTval.toInt());
                           }
    /////////////////////////////////////////////////////////////////////////
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
