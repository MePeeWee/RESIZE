#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::resizeEvent(QResizeEvent* event)
 {
   QMainWindow::resizeEvent(event);

   QSize WSize = this->window()->size();
   Width  = WSize.width();
   Height = WSize.height();

   WRatio = (float)Width/MaxWidth;   QString WR=QString::number(WRatio);
   HRatio = (float)Height/MaxHeight; QString HR=QString::number(HRatio);

   qDebug() << "WidthRatio =" << WR <<"\n"
            << "HeightRatio =" << HR <<"\n"
            << "Width  = " << Width <<"\n"
            << "Height = " << Height <<"\n";

   SetFonts();
   setColAlignments();

}
//////////////////////////////////////////////////////////////////
void MainWindow::SetFonts(void)
{float startWidth=MinStartWidth;
 qreal Fscale;

 Fscale = 6/startWidth*Width;
 DynamicFONT->setPointSizeF(Fscale+1);
                                     //Data entries in tableView
                                     ui->BALANCE_LIST->setFont(*DynamicFONT);

                                     //Table header
                                     QString Q1="QHeaderView::section:horizontal { font-size: ";
                                     QString Q3="px; }";
                                     QString Q2 = QString::number(int(180*WRatio*0.1+2));
                                     QString QX=Q1+Q2+Q3;
                                     ui->BALANCE_LIST->setStyleSheet(QX);
                                     ui->BALANCE_LIST->resizeRowsToContents();

                                     SET_COL_WIDTHS();

                                     //For text - Notes
                                     ui->IRSnotes_TEdit->setFontPointSize(1.7*Fscale);
                                     ui->IRSnotes_TEdit->setText(NotesTEXT);

                                     //BALANCE NAME
                                     QFont font = ui->BALNME_LBL->font();
                                     font.setPixelSize(Fscale+8);
                                     ui->BALNME_LBL->setFont(font);
                                       font.setBold(true);
                                     ui->BalNME_label->setFont(font);
                                       font.setBold(false);

                                     //SPIN BOXES(use reduced font)
                                     font.setPixelSize(Fscale+3);
                                         ui->CID_spinBox->setFont(font);
                                         ui->CIDspinLabel->setFont(font);
                                             ui->ACID_spinBox->setFont(font);
                                             ui->ACIDspinLabel->setFont(font);
                                                 ui->Act_CHKID_spinBox->setFont(font);
                                                 ui->Act_CHKID_spinlabel->setFont(font);
                                                   ui->Act_RSID_spinlabel->setFont(font);
                                                   ui->Act_RSID_spinBox->setFont(font);
                                                     ui->Act_PID_spinBox->setFont(font);
                                                     ui->Act_PID_SpinLabel->setFont(font);
                                                      ui->Act_PIDrs_spinBox->setFont(font);
                                                      ui->Act_PIDrs_SpinLabel->setFont(font);
                                                         ui->Act_CHKnID_spinBox->setFont(font);
                                                         ui->Act_CHKnID_spinlabel->setFont(font);
                                                         font.setPixelSize(Fscale+5);
                                                          ui->Context_label->setFont(font);

                                     //Check Boxes (use same font - slightly reduced)
                                      font.setPixelSize(Fscale+3);
                                         ui->CHKLd_ChkBx->setFont(font);
                                         ui->CHKnRS_ChkBx->setFont(font);
                                         ui->IsInstlRS_ChkBx->setFont(font);
                                         ui->ShowZRO_ChkBx->setFont(font);
                                         ui->InZro_label->setFont(font);

                                     //Filter Bar Group boxes
                                       ui->SrtBY_GrpBox->setFont(font);
                                       ui->AscDec_GrpBox->setFont(font);
                                       ui->Asc_RBtn->setFont(font);//should set with GrpBox but does not ??
                                       ui->LstBy_GrpBox->setFont(font);

                                     //Resize Dummy Button
                                       font.setPixelSize(Fscale+4);
                                       ui->DummyBtn->setFont(font);

                                     //Data-ID labels and text boses
                                       ui->BID_label->setFont(font);        ui->BID_Value->setFont(font);
                                       ui->CID_label->setFont(font);        ui->CID_Value->setFont(font);
                                       ui->maxACID_label->setFont(font);    ui->maxACID_Value->setFont(font);
                                       ui->ACID_Label->setFont(font);       ui->ACID_Value->setFont(font);
                                       ui->mAct_PID_label->setFont(font);     ui->mAct_PID_Value->setFont(font);
                                       ui->Act_PID_label->setFont(font);        ui->Act_PID_Value->setFont(font);
                                       ui->maxCHKn_label->setFont(font);    ui->maxCHKn_Value->setFont(font);
                                       ui->CHKn_Label->setFont(font);       ui->CHKn_Value->setFont(font);
                                       ui->Act_CHKID_label->setFont(font);       ui->Act_CHKID_Value->setFont(font);
                                       ui->mAct_CHKID_label->setFont(font);       ui->mAct_CHKID_Value->setFont(font);

}
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// BALANCE LIST COLUMN WIDTH SETTINGS //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::SET_COL_WIDTHS(void)
{
float startWidth=MinStartWidth;
 ui->BALANCE_LIST->setColumnWidth(0, int(40/startWidth*Width));
  ui->BALANCE_LIST->setColumnWidth(1, int(90/startWidth*Width));
    ui->BALANCE_LIST->setColumnWidth(2, int(50/startWidth*Width));
      ui->BALANCE_LIST->setColumnWidth(3, int(50/startWidth*Width));
        ui->BALANCE_LIST->setColumnWidth(4, int(50/startWidth*Width));
          ui->BALANCE_LIST->setColumnWidth(5, int(50/startWidth*Width));
            ui->BALANCE_LIST->setColumnWidth(6, int(50/startWidth*Width));
              ui->BALANCE_LIST->setColumnWidth(7, int(50/startWidth*Width));
                ui->BALANCE_LIST->setColumnWidth(8, int(50/startWidth*Width));
                   ui->BALANCE_LIST->setColumnWidth(9, int(150/startWidth*Width));
                     ui->BALANCE_LIST->setColumnWidth(10, int(50/startWidth*Width));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::setColAlignments(void)
{
querymodel->setData(querymodel->index(1,1),Qt::TextAlignmentRole);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::setACTIVEspinboxes(void)
{
switch (CHK_TYPE)
                {   ///////////////
                    case RIG_RS:         ui->Context_label->setText("CHKn Context Notes : (RS_DATA_CHKn - Rig Roll Scan Checks - NOT project linked - CID Linked !!)");
                                         ui->TABid_label->setText("RSID_CHKn : "); ui->TABid_Value->setNum(CHKn);
                                         //NON ACTIVE:
                                            //SpinBoxesspinBox
                                            SpinBoxNoProc=true;
                                                 ui->CID_spinBox->setEnabled(false);  ui->CIDspinLabel->setEnabled(false);
                                                 ui->ACID_spinBox->setEnabled(false); ui->ACIDspinLabel->setEnabled(false);
                                                 ui->Act_PID_spinBox->setEnabled(false);       ui->Act_PID_SpinLabel->setEnabled(false);
                                                 ui->Act_PIDrs_spinBox->setEnabled(false);       ui->Act_PIDrs_SpinLabel->setEnabled(false);
                                                 ui->Act_CHKID_spinBox->setEnabled(false);  ui->Act_CHKID_spinlabel->setEnabled(false);
                                                 ui->Act_RSID_spinBox->setEnabled(false);  ui->Act_RSID_spinlabel->setEnabled(false);
                                            SpinBoxNoProc=false;
                                         //Labels and data
                                                 ui->maxACID_label->setEnabled(false); ui->maxACID_Value->setText(""); ui->maxACID_Value->setEnabled(false);
                                                 ui->ACID_Label->setEnabled(false);    ui->ACID_Value->setText("");    ui->ACID_Value->setEnabled(false);
                                                 ui->mAct_PID_label->setEnabled(false);  ui->mAct_PID_Value->setText("");  ui->mAct_PID_Value->setEnabled(false);
                                                 ui->Act_PID_label->setEnabled(false);  ui->Act_PID_Value->setText("");  ui->Act_PID_Value->setEnabled(false);
                                                 ui->PID_label->setEnabled(false);     ui->PID_Value->setText("");     ui->PID_Value->setEnabled(false);
                                                 ui->mAct_CHKID_label->setEnabled(false);  ui->mAct_CHKID_Value->setText("");  ui->mAct_CHKID_Value->setEnabled(false);
                                                 ui->Act_CHKID_label->setEnabled(false);  ui->Act_CHKID_Value->setText("");  ui->Act_CHKID_Value->setEnabled(false);
                                                 ui->PRJNME_label->setEnabled(false); ui->PRJ_NME_Value->setText("");  ui->PRJ_NME_Value->setEnabled(false);


                                         //ACTIVE
                                            //SpinBoxes
                                                 SpinBoxNoProc=true;
                                                 ui->Act_CHKnID_spinBox->setEnabled(true); ui->Act_CHKnID_spinlabel->setEnabled(true);
                                                 SpinBoxNoProc=false;
                                            //Labels and data

                                                 ui->CID_label->setEnabled(true);     ui->CID_Value->setEnabled(true);     ui->CID_Value->setNum(CID);
                                                 ui->CHKn_Label->setEnabled(true);    ui->CHKn_Value->setEnabled(true);    ui->CHKn_Value->setNum(CHKn);
                                                 ui->maxCHKn_label->setEnabled(true); ui->maxCHKn_Value->setEnabled(true); ui->maxCHKn_Value->setNum(maxCHKn);

                                         break;

                    //////////////////
                    case INSTALL_RS:      ui->Context_label->setText("INSTLn CHKn Context Notes : (RS_DATA_CHKn - In tunnel Checks - project linked)");
                                          ui->TABid_label->setText("RSID_INS : "); ui->TABid_Value->setNum(RSID_ins_RS);
                                         //NON ACTIVE:
                                            //SpinBoxes
                                            SpinBoxNoProc=true;
                                                 ui->Act_PID_spinBox->setEnabled(false);         ui->Act_PID_SpinLabel->setEnabled(false);
                                                 ui->CID_spinBox->setEnabled(false);             ui->CIDspinLabel->setEnabled(false);
                                                 ui->ACID_spinBox->setEnabled(false);            ui->ACIDspinLabel->setEnabled(false);
                                                 ui->Act_CHKID_spinBox->setEnabled(false);       ui->Act_CHKID_spinlabel->setEnabled(false);
                                                 ui->Act_CHKnID_spinBox->setEnabled(false);      ui->Act_CHKnID_spinlabel->setEnabled(false);
                                            SpinBoxNoProc=false;
                                            //Labels and data
                                                 ui->maxACID_label->setEnabled(false);      ui->maxACID_Value->setEnabled(false);   ui->ACID_Value->setText("");
                                                 ui->ACID_Label->setEnabled(false);         ui->ACID_Value->setEnabled(false);      ui->ACID_Value->setText("");
                                                 ui->maxCHKn_label->setEnabled(false);      ui->maxCHKn_Value->setEnabled(false);   ui->maxCHKn_Value->setText("");
                                                 ui->CHKn_Label->setEnabled(false);         ui->CHKn_Value->setEnabled(false);      ui->CHKn_Value->setText("");


                                         //ACTIVE
                                            //SpinBoxes
                                                 SpinBoxNoProc=true;
                                                 ui->Act_PIDrs_spinBox->setEnabled(true);       ui->Act_PIDrs_SpinLabel->setEnabled(true);
                                                 ui->Act_RSID_spinBox->setEnabled(true);        ui->Act_RSID_spinlabel->setEnabled(true);
                                                 SpinBoxNoProc=false;
                                           //Labels and Data
                                                 ui->CID_label->setEnabled(true);          ui->CID_Value->setEnabled(true);         ui->CID_Value->setNum(CID_RS);
                                                 ui->PID_label->setEnabled(true);          ui->PID_Value->setEnabled(true);         ui->PID_Value->setNum(Current_PID_RS);
                                                 ui->mAct_CHKID_label->setEnabled(true);   ui->mAct_CHKID_Value->setEnabled(true);  ui->mAct_CHKID_Value->setNum(mAct_RSID_INS);
                                                 ui->Act_CHKID_label->setEnabled(true);    ui->Act_CHKID_Value->setEnabled(true);   ui->Act_CHKID_Value->setNum(Selected_Act_RSIDINS);
                                                 ui->Act_PID_label->setEnabled(true);      ui->Act_PID_Value->setEnabled(true);     ui->Act_PID_Value->setNum(Selected_Act_PID_RS);
                                                 ui->mAct_PID_label->setEnabled(true);     ui->mAct_PID_Value->setEnabled(true);    ui->mAct_PID_Value->setNum(mAct_PID_RS);
                                                 ui->PRJNME_label->setEnabled(true);       ui->PRJ_NME_Value->setEnabled(true);     ui->PRJ_NME_Value->setText(PRJ_NAME_RS);
                                         break;

                    /////////////
                    case SETS:        ui->Context_label->setText("CHECK LOAD Context Notes : (INS_CHK_DATA - Discrete Installation load sets - Project linked)");
                                      ui->TABid_label->setText("ICHKID : "); ui->TABid_Value->setNum(ICHKID_SETS);

                                      //NON ACTIVE:
                                        //SpinBoxes
                                        SpinBoxNoProc=true;
                                             ui->Act_RSID_spinBox->setEnabled(false);        ui->Act_RSID_spinlabel->setEnabled(false);
                                             ui->CID_spinBox->setEnabled(false);              ui->CIDspinLabel->setEnabled(false);
                                             ui->ACID_spinBox->setEnabled(false);             ui->ACIDspinLabel->setEnabled(false);
                                             ui->Act_CHKnID_spinlabel->setEnabled(false);     ui->Act_CHKnID_spinBox->setEnabled(false);
                                             ui->Act_PIDrs_spinBox->setEnabled(false);       ui->Act_PIDrs_SpinLabel->setEnabled(false);
                                        SpinBoxNoProc=false;
                                        //Labels and data
                                             ui->maxACID_label->setEnabled(false);  ui->maxACID_Value->setEnabled(false); ui->maxACID_Value->setText("");
                                             ui->ACID_Label->setEnabled(false);     ui->ACID_Value->setEnabled(false);    ui->ACID_Value->setText("");
                                             ui->maxCHKn_label->setEnabled(false);  ui->maxCHKn_Value->setEnabled(false); ui->maxCHKn_Value->setText("");
                                             ui->CHKn_Label->setEnabled(false);     ui->CHKn_Value->setEnabled(false);    ui->CHKn_Value->setText("");

                                      //ACTIVE
                                        //SpinBoxes
                                             SpinBoxNoProc=true;
                                             ui->Act_PID_SpinLabel->setEnabled(true);       ui->Act_PID_spinBox->setEnabled(true);
                                             ui->Act_CHKID_spinlabel->setEnabled(true);     ui->Act_CHKID_spinBox->setEnabled(true);
                                             SpinBoxNoProc=false;
                                        //Labels and data
                                             ui->CID_label->setEnabled(true);           ui->CID_Value->setEnabled(true);         ui->CID_Value->setNum(CID_SETS);
                                             ui->PID_label->setEnabled(true);           ui->PID_Value->setEnabled(true);         ui->PID_Value->setNum(Current_PID_SETS);
                                             ui->mAct_CHKID_label->setEnabled(true);    ui->mAct_CHKID_Value->setEnabled(true);  ui->mAct_CHKID_Value->setNum(mAct_CHKID);
                                             ui->Act_CHKID_label->setEnabled(true);     ui->Act_CHKID_Value->setEnabled(true);   ui->Act_CHKID_Value->setNum(Selected_Act_CHKID);
                                             ui->mAct_PID_label->setEnabled(true);      ui->mAct_PID_Value->setEnabled(true);    ui->mAct_PID_Value->setNum(mAct_PID_SETS);
                                             ui->Act_PID_label->setEnabled(true);       ui->Act_PID_Value->setEnabled(true);     ui->Act_PID_Value->setNum(Selected_Act_PID_SETS);
                                             ui->PRJNME_label->setEnabled(true);        ui->PRJ_NME_Value->setEnabled(true);     ui->PRJ_NME_Value->setText(PRJ_NAME_SETS);
                                         break;

                   default: break;

               }//end case
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
