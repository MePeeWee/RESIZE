#include "mainwindow.h"
#include "ui_mainwindow.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////

void MainWindow::UpDateData(void)
{
 switch(CHK_TYPE)
    {case RIG_RS:
                       Update_CHKnDATA();
          break;

     case INSTALL_RS:
                       Update_INSTLnDATA();
          break;

     case SETS:            
                       Update_CHKldDATA();
          break;

    default: break;
    }
 setACTIVEspinboxes();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::DataUpdate_NewBalSelectn(void)
{QString Q1,Q2,Q3;
    //Default output is for CHKn text so
    if(CHK_TYPE==RIG_RS){ CHKBoxNoProc=true; ui->CHKnRS_ChkBx->setChecked(true);CHKBoxNoProc=false;}
    if(CHK_TYPE==INSTALL_RS){CHKBoxNoProc=true; ui->IsInstlRS_ChkBx->setChecked(true);CHKBoxNoProc=false;}
    if(CHK_TYPE==SETS){CHKBoxNoProc=true; ui->CHKLd_ChkBx->setChecked(true);CHKBoxNoProc=false;}

QModelIndex IDX     = querymodel->index(SELECTED_ROW,0,QModelIndex());

SELECTED_BID = querymodel->data(IDX,Qt::DisplayRole).toInt();
ui->BID_Value->setNum(SELECTED_BID);

if(db.open())
 {
    /////FETCH BALANCE MAX_ACID,CID,BALNAME FROM VIEW=BLS2 (contains only maxACID data=latest caldata)
    //////////////////////////////////////////////////////////////////////////////////////////////////
    QSqlQuery query(db);
    QString BI = QString::number(SELECTED_BID);
    Q1 = "SELECT BALNAME,CIDll,ACIDll FROM BLS2 WHERE BIDll=";
    query.exec(Q1+BI);  query.first(); //qDebug()<<Q1+BI;
    //Fetch an display latest cal ID data
    QString  NME = query.value(0).toString();      ui->BalNME_label->setText(NME);
    CID          = query.value(1).toInt();         ui->CID_Value->setNum(CID);
    maxACID      = query.value(2).toInt();         ui->ACID_Value->setNum(maxACID);
                                                   ui->maxACID_Value->setNum(maxACID);
    ACID=maxACID;

    //Set range and values in SpinBoxes
    SpinBoxNoProc=true;
        if(maxACID>=1){ui->ACID_spinBox->setRange(1, maxACID);}
        else          {ui->ACID_spinBox->setRange(0, 0);}
        ui->ACID_spinBox->setValue(maxACID);
        ui->CID_spinBox->setValue(CID);
    SpinBoxNoProc=false;



if(CHK_TYPE==RIG_RS)
 {
    ////FIND OUT IF THERE ARE ANY CHKn RECORDS FOR THIS CID (NOT project related !!! - Calibration record related !!!)
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    QString CI = QString::number(CID);
    Q1 = "SELECT max(Act_RSID_CHKn) FROM RS_DATA_CHKn where CID=";
    query.exec(Q1+CI);  query.first(); //qDebug()<<Q1+CI;
    maxCHKn = query.value(0).toInt();
    CHKn=maxCHKn;
    if(maxCHKn>=1){SpinBoxNoProc=true;ui->Act_CHKnID_spinBox->setRange(1, maxCHKn);SpinBoxNoProc=false;}
      else        {SpinBoxNoProc=true;ui->Act_CHKnID_spinBox->setRange(0, 0);SpinBoxNoProc=false;}
    SpinBoxNoProc=true;ui->Act_CHKnID_spinBox->setValue(maxCHKn);SpinBoxNoProc=false;
    ui->maxCHKn_Value->setNum(maxCHKn);
    ui->CHKn_Value->setNum(CHKn);

    ////FINALLY FETCH NOTES FOR THIS RS RECORD
    /// //////////////////////////////////////
    //if an instl RS was found show those notes...
    QString RSI_CN = QString::number(CHKn);
    Q1 = "SELECT IRS_NOTES FROM RS_DATA_CHKn where Act_RSID_INS =";
    query.exec(Q1+RSI_CN);  query.first(); //qDebug()<<Q1+RSI_CN;
    NotesTEXT = query.value(0).toString();
    ui->IRSnotes_TEdit->setText(NotesTEXT);
}

if(CHK_TYPE==SETS)
{
    /// 1.) GO TO PROJECTS TABLE AND SELECT THE HIGHEST Act_PID VALUE USING BID
    /// ///////////////////////////////////////////////////////////////////////
    Q1 = "SELECT max(Act_PID) FROM PROJECTS WHERE BID=";
    query.exec(Q1+BI);  query.first(); qDebug()<<Q1+BI;

    mAct_PID_SETS = query.value(0).toInt();      ui->mAct_PID_Value->setNum(mAct_PID_SETS);
    Selected_Act_PID_SETS=mAct_PID_SETS;         ui->Act_PID_Value->setNum(Selected_Act_PID_SETS);

    //Act_PID spin Box
    SpinBoxNoProc=true;
        if(mAct_PID_SETS>=1)  {ui->Act_PID_spinBox->setRange(1, mAct_PID_SETS);}
         else                 {ui->Act_PID_spinBox->setRange(0, 0);}
        ui->Act_PID_spinBox->setValue(Selected_Act_PID_SETS);
    SpinBoxNoProc=false;

    /// 2.) AGAIN FROM PROJECTS TABLE SELECT THE CORRESPONDING RECORD ID (PID) and other data
    /// //////////////////////////////////////////////////////////////////////////////////////
    Q1 = "SELECT PID, CID, ACID, ICHKID, PRJ_NAME, TID FROM PROJECTS where BID=";
    Q2 = " AND Act_PID = ";
    QString mAPID = QString::number(mAct_PID_SETS);
    query.exec(Q1+BI+Q2+mAPID);  query.first(); qDebug()<<Q1+BI+Q2+mAPID;

    Current_PID_SETS      = query.value(0).toInt();     // ui->PID_Value->setNum(Current_PID_SETS);
    CID_SETS              = query.value(1).toInt();
    ACID_SETS             = query.value(2).toInt();
    ICHKID_SETS           = query.value(3).toInt();
    PRJ_NAME_SETS         = query.value(4).toString();

    /// 3.) WE NEED TO ESTABLISH THE MAX NUMBER OF DATA RECORDS (mAct_CHKID) THERE ARE FOR THIS Current_PID_SETS
    /// ////////////////////////////////////////////////////////////////////////////////////////////////////////
    QString ThisPRJ=QString::number(Current_PID_SETS);
    Q1 = "SELECT max(Act_CHKID) FROM INS_CHK_DATA WHERE BID=";
    Q2 = " AND PRJNO_util = ";
    query.exec(Q1+BI+Q2+ThisPRJ);  query.first(); qDebug()<<Q1+BI+Q2+ThisPRJ;
    //Fetch and display latest cal ID data
    mAct_CHKID  = query.value(0).toInt(); Selected_Act_CHKID = mAct_CHKID;//Current selection is set to max value

    //Act_CHKID spin Box
    SpinBoxNoProc=true;
        if(mAct_CHKID>=1)     {ui->Act_CHKID_spinBox->setRange(1, mAct_CHKID);}
         else                 {ui->Act_CHKID_spinBox->setRange(0, 0);}
        ui->Act_CHKID_spinBox->setValue(Selected_Act_CHKID);
    SpinBoxNoProc=false;
}

if(CHK_TYPE==INSTALL_RS)
 {
    /// 1.)FETCH ANY LATEST PROJECT(S) FOR THIS BALANCE IF ONE EXISTS (Project linked)
    //////////////////////////////////////////////////////////////////////////////////
    //1.) Get the total number of projects listed for this balance...
    Q1 = "SELECT max(Act_PID) FROM BALdb.PROJECTS where BID=";
    query.exec(Q1+BI); query.first();

    mAct_PID_RS = query.value(0).toInt();        ui->mAct_PID_Value->setNum(mAct_PID_RS);
    Selected_Act_PID_RS=mAct_PID_RS;             ui->Act_PID_Value->setNum(Selected_Act_PID_RS);

    //Act_PIDrs spin Box
    SpinBoxNoProc=true;
        if(mAct_PID_RS>=1)    {ui->Act_PIDrs_spinBox->setRange(1, mAct_PID_RS);}
         else                 {ui->Act_PIDrs_spinBox->setRange(0, 0);}
        ui->Act_PIDrs_spinBox->setValue(Selected_Act_PID_RS);
    SpinBoxNoProc=false;

    ///2.)Now fetch other data for this project such as  PID, CID, ACID
    Q1 = "SELECT PID, CID, ACID, RSID_INS, PRJ_NAME, TID FROM BALdb.PROJECTS where BID=";
    Q2 = " AND Act_PID = ";
    QString MXA= QString::number(mAct_PID_RS);
    query.exec(Q1+BI+Q2+MXA);  query.first(); qDebug()<<Q1+BI+Q2+MXA;

    Current_PID_RS      = query.value(0).toInt();     // ui->PID_Value->setNum(Current_PID_SETS);
    CID_RS              = query.value(1).toInt();
    ACID_RS             = query.value(2).toInt();
    RSID_ins_RS           = query.value(3).toInt();
    PRJ_NAME_RS         = query.value(4).toString();

    /// 3.) WE NEED TO ESTABLISH THE MAX NUMBER OF DATA RECORDS (mAct_RSID_INS) THERE ARE FOR THIS Current_PID_RS
    /// /////////////////////////////////////////////////////////////////////////////////////////////////////////
    QString ThisPRJ=QString::number(Current_PID_RS);
    Q1 = "SELECT max(Act_RSID_INS) FROM RS_DATA_INSTLn WHERE BID=";
    Q2 = " AND PRJNO_util = ";
    query.exec(Q1+BI+Q2+ThisPRJ);  query.first(); qDebug()<<Q1+BI+Q2+ThisPRJ;
    //Fetch and display latest cal ID data
    mAct_RSID_INS  = query.value(0).toInt(); Selected_Act_RSIDINS = mAct_RSID_INS;//Current selection is set to max value

    SpinBoxNoProc=true;
        if(mAct_RSID_INS>=1)ui->Act_RSID_spinBox->setRange(1, mAct_RSID_INS);
          else              ui->Act_RSID_spinBox->setRange(0, 0);
        ui->Act_RSID_spinBox->setValue(mAct_RSID_INS);
    SpinBoxNoProc=false;
 }

    db.close();
 }//end if db open

else {QMessageBox::information(this,"No Data","BALdb is not open for data update");}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::Update_CHKnDATA(void)
{if(CHK_TYPE!=RIG_RS)return;

      if(db.open())
      {
      QSqlQuery query(db);
      QString RSI_CN = QString::number(CHKn);
      QString CD     = QString::number(CID);
      QString Q1 = "SELECT IRS_NOTES FROM RS_DATA_CHKn where Act_RSID_CHKn=";
      QString Q2 = " and CID=";
      query.exec(Q1+RSI_CN+Q2+CD);  query.first(); qDebug()<<Q1+RSI_CN+Q2+CD;
      NotesTEXT = query.value(0).toString();
      ui->IRSnotes_TEdit->setText(NotesTEXT);
      db.close();
      }
      else {QMessageBox::information(this,"No Data","BALdb is not open for data update");}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::Update_INSTLnDATA(void)//only valid if project linked!!
{if(CHK_TYPE!=INSTALL_RS)return;
 QString Q1,Q2;

    if(db.open())
     {
        QSqlQuery query(db);
        QString BI = QString::number(SELECTED_BID);

        QString CL_Selected = QString::number(Selected_Act_RSIDINS);
        QString PJ_Selected = QString::number(Current_PID_RS);

        QString Q1 = "SELECT RSID_INS,PRJNO_util,Act_RSID_INS,IRS_NOTES FROM RS_DATA_INSTLn WHERE BID=";
        QString Q2 = " AND Act_RSID_INS =";
        QString Q3 = " and PRJNO_util =";
        query.exec(Q1+BI+Q2+CL_Selected+Q3+PJ_Selected);  query.first(); qDebug()<<Q1+BI+Q2+CL_Selected+Q3+PJ_Selected;

            RSID_ins_RS          = query.value(0).toInt();        ui->TABid_Value->setNum(RSID_ins_RS);               ui->TABid_label->setText("RSID_INS : ");
            Current_PID_RS   = query.value(1).toInt();            ui->Act_PID_Value->setNum(Current_PID_RS);
        Selected_Act_RSIDINS = query.value(2).toInt();
        NotesTEXT = query.value(3).toString();
        ui->IRSnotes_TEdit->setText(NotesTEXT);

       db.close();
    }//end if db open
    else {QMessageBox::information(this,"No Data","BALdb is not open for data update");}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::Update_CHKldDATA(void)
{if(CHK_TYPE!=SETS)return;
    if(db.open())
     {
        QSqlQuery query(db);
        QString BI = QString::number(SELECTED_BID);

        QString CL_Selected = QString::number(Selected_Act_CHKID);
        QString PJ_Selected = QString::number(Current_PID_SETS);

        QString Q1 = "SELECT ICHKID,PRJNO_util,Act_CHKID,NOTES FROM INS_CHK_DATA WHERE BID=";
        QString Q2 = " AND Act_CHKID =";
        QString Q3 = " and PRJNO_util =";
        query.exec(Q1+BI+Q2+CL_Selected+Q3+PJ_Selected);  query.first(); qDebug()<<Q1+BI+Q2+CL_Selected+Q3+PJ_Selected;

            ICHKID_SETS               = query.value(0).toInt();        ui->TABid_Value->setNum(ICHKID_SETS);               ui->TABid_label->setText("ICHKID");
            //Selected_Act_PID_SETS
            int DUMMY        = query.value(1).toInt();        ui->Act_PID_Value->setNum(Selected_Act_PID_SETS);
        int ENTRY_num = query.value(2).toInt();   //Just used for debugging
        NotesTEXT = query.value(3).toString();
        ui->IRSnotes_TEdit->setText(NotesTEXT);

       db.close();
    }//end if db open

    else {QMessageBox::information(this,"No Data","BALdb is not open for data updSelected_Act_PID_SETSate");}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::Update_CHKldDATA_PRJchanged(void)
{if(CHK_TYPE!=SETS)return;
    if(db.open())
     {  QSqlQuery query(db);
        QString BI = QString::number(SELECTED_BID);


        //Because it is possible for the Selected_Act_PID_SETS if ther is more than on project we must re-fetch data from PROJECTS
        QString Q1 = "SELECT PID, CID, ACID, ICHKID, PRJ_NAME, TID FROM PROJECTS where BID=";
        QString Q2 = " AND Act_PID = ";
        QString APID = QString::number(Selected_Act_PID_SETS);
        query.exec(Q1+BI+Q2+APID);  query.first(); qDebug()<<Q1+BI+Q2+APID;

        Current_PID_SETS      = query.value(0).toInt();     // ui->PID_Value->setNum(Current_PID_SETS);
        CID_SETS              = query.value(1).toInt();
        ACID_SETS             = query.value(2).toInt();
        ICHKID_SETS           = query.value(3).toInt();
        PRJ_NAME_SETS         = query.value(4).toString();

        /// 3.) WE NEED TO ESTABLISH THE MAX NUMBER OF DATA RECORDS (mAct_CHKID) THERE ARE FOR THIS Current_PID_SETS
        /// ////////////////////////////////////////////////////////////////////////////////////////////////////////
        QString ThisPRJ=QString::number(Current_PID_SETS);
        Q1 = "SELECT max(Act_CHKID) FROM INS_CHK_DATA WHERE BID=";
        Q2 = " AND PRJNO_util = ";
        query.exec(Q1+BI+Q2+ThisPRJ);  query.first(); qDebug()<<Q1+BI+Q2+ThisPRJ;
        //Fetch and display latest cal ID data
        mAct_CHKID  = query.value(0).toInt(); Selected_Act_CHKID = mAct_CHKID;//Current selection is set to max value

        //Act_CHKID spin Box
        SpinBoxNoProc=true;
            if(mAct_CHKID>=1)     {ui->Act_CHKID_spinBox->setRange(1, mAct_CHKID);}
             else                 {ui->Act_CHKID_spinBox->setRange(0, 0);}
            ui->Act_CHKID_spinBox->setValue(Selected_Act_CHKID);
        SpinBoxNoProc=false;

       db.close();
    }//end if db open

    else {QMessageBox::information(this,"No Data","BALdb is not open for data updSelected_Act_PID_SETSate");}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::Update_INSTLnDATA_PRJchanged(void)
{if(CHK_TYPE!=INSTALL_RS)return;
    if(db.open())
     {  QSqlQuery query(db);
        QString BI = QString::number(SELECTED_BID);

        //Because it is possible for the Selected_Act_PID_RS may have than one RS_DATA_INS entry we must re-fetch data...
        QString Q1 = "SELECT PID, CID, ACID, RSID_INS, PRJ_NAME, TID FROM PROJECTS where BID=";
        QString Q2 = " AND Act_PID = ";
        QString APID = QString::number(Selected_Act_PID_RS);
        query.exec(Q1+BI+Q2+APID);  query.first(); qDebug()<<Q1+BI+Q2+APID;

        Current_PID_RS      = query.value(0).toInt();     // ui->PID_Value->setNum(Current_PID_SETS);
        CID_RS              = query.value(1).toInt();
        ACID_RS             = query.value(2).toInt();
        RSID_ins_RS         = query.value(3).toInt();
        PRJ_NAME_RS         = query.value(4).toString();

        /// 3.) WE NEED TO ESTABLISH THE MAX NUMBER OF DATA RECORDS (mAct_RSID_INS) THERE ARE FOR THIS Current_PID_RS
        /// /////////////////////////////////////////////////////////////////////////////////////////////////////////
        QString ThisPRJ=QString::number(Current_PID_RS);
        Q1 = "SELECT max(Act_RSID_INS) FROM RS_DATA_INSTLn WHERE BID=";
        Q2 = " AND PRJNO_util = ";
        query.exec(Q1+BI+Q2+ThisPRJ);  query.first(); qDebug()<<Q1+BI+Q2+ThisPRJ;
        //Fetch and display latest cal ID data
        mAct_RSID_INS  = query.value(0).toInt(); Selected_Act_RSIDINS = mAct_RSID_INS;//Current selection is set to max value(new project)

        //Act_CHKID spin Box
        SpinBoxNoProc=true;
            if(mAct_CHKID>=1)     {ui->Act_CHKID_spinBox->setRange(1, mAct_CHKID);}
             else                 {ui->Act_CHKID_spinBox->setRange(0, 0);}
            ui->Act_CHKID_spinBox->setValue(Selected_Act_CHKID);
        SpinBoxNoProc=false;

       db.close();
    }//end if db open

    else {QMessageBox::information(this,"No Data","BALdb is not open for data updSelected_Act_PID_SETSate");}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
