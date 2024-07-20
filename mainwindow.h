#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <customsqlmodel.h>

#include <logindialog.h>

#include <QMainWindow>
#include <QDesktopWidget>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QHeaderView>
#include <QFont>
#include <QResizeEvent>
#include <QTableView>
#include <QSqlDatabase>
#include <QtSql>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //BALANCE LIST FILTER BUTTONS
    /////////////////////////////
    void on_ALL_Btn_clicked();
    void on_CALIBd_Btn_clicked();
    void on_D6_Only_Btn_clicked();
    void on_ShowZRO_ChkBx_clicked();
    void on_NF_RBtn_clicked();
    void on_BID_RBtn_clicked();
    void on_PM_RBtn_clicked();
    void on_SF_RBtn_clicked();
    void on_YM_RBtn_clicked();
    void on_RM_RBtn_clicked();
    void on_AF_RBtn_clicked();
    void on_Dia_RBtn_clicked();
    void on_Asc_RBtn_clicked();
    void on_Dec_RBtn_clicked();
    //SpinBoxes
    ///////////
    void on_Act_CHKID_spinBox_valueChanged(int arg1);
    void on_Act_PID_spinBox_valueChanged(int arg1);
    void on_Act_PIDrs_spinBox_valueChanged(int arg1);
    void on_Act_CHKnID_spinBox_valueChanged(int arg1);
    //BALANCE SELECTION
    ///////////////////
    void on_BALANCE_LIST_clicked(const QModelIndex &index);
    //CHECK-TYPE CHECKBOXES
    ///////////////////////
    void on_CHKnRS_ChkBx_clicked();
    void on_IsInstlRS_ChkBx_clicked();
    void on_CHKLd_ChkBx_clicked();
    void setACTIVEspinboxes(void);

    void resizeEvent(QResizeEvent* event);



private:
    Ui::MainWindow *ui;
    QFont *DynamicFONT;

    //SCREEN
    ////////
    int MaxWidth,Width;
    int MaxHeight,Height;
    float MinStartWidth=805;
    float WRatio=1.0;
    float HRatio=1.0;
    void SetFonts(void);
    //LOGIN
    ///////
    LoginDialog *LoginDlgWin;
    char key[3] = {'K', 'C', 'Q'};
    QString HostNme;
    QString DBName;
    QStringList USRandPWDsplit[10];
    QString PORTval;
    void Load_LoginConUsrPwdData(void);
    void UsrInput_NAMEandPWD(void);
    //BAL. LISTING FILTERS
    //////////////////////
    int BAL_LIST_FILTER =1; //0=ALL,   1=CALIBRATED ONLY,  2=6-COMP ONLY
    int  SORTon =6;         //(Dia) What to sort on NF.PM,SF YM RM AF DIAM BID== 0,1,2,3,4,5,6,7
    int  SORT=1;            //Sort flag :-  sort decending (0) or Ascending (1).
    bool EXCL_Z=true;       //Exclude records where the value is zero

    //DATABASE......
    ////////////////
    QSqlDatabase db;
    //QSqlQueryModel     *querymodel;
    CustomSqlModel *querymodel;

    //BALANCE SELECTION PARAMETERS
    //////////////////////////////
    int SELECTED_ROW=0;
    int SELECTED_BID=1;
    int CID=1;
    int ACID=1;
    int maxACID=1;


    enum CHECK_TYPE{ RIG_RS,  INSTALL_RS,  SETS }  CHK_TYPE;
    //PARAMS FOR CID-Linked RIG_RS RollScans
    ////////////////////////////////////////
    int CHKn   =0;
    int maxCHKn=0;
    int ICHKID =0;

    //PARAMS FOR INSTALL_RS:(Project Linked)
    ///////////////////////////////////////
    int mAct_PID_RS               = 0;
    int Selected_Act_PID_RS       = 0;
    int Selected_Act_RSIDINS      = 0;
    int Current_PID_RS            = 0;
    int CID_RS                    = 0;
    int ACID_RS                   = 0;
    int RSID_ins_RS               = 0;
    int mAct_RSID_INS             = 0;
    QString PRJ_NAME_RS           = 0;

    //PARAMS FOR CHECK SETS:(Project Linked)
    ////////////////////////////////////////
    int mAct_PID_SETS         = 0;
    int Selected_Act_PID_SETS = 0;
    int Current_PID_SETS      = 0;
    int CID_SETS              = 0;
    int ACID_SETS             = 0;
    int ICHKID_SETS           = 0;
    int mAct_CHKID            = 0;
    int Selected_Act_CHKID    = 0;
    QString PRJ_NAME_SETS     = "";

    QString NotesTEXT;

    //SWITCHES
    //////////
    bool SpinBoxNoProc=false;
    bool CHKBoxNoProc=false;

     //DISPLAY FUNCTIONS
     ///////////////////
     void ShowBalList(void);
     void SET_COL_WIDTHS(void);
     void setColAlignments(void);

     //DATABASE ACCESSING UI FUNCTIONS
     /////////////////////////////////
     void DataUpdate_NewBalSelectn(void);
       void UpDateData(void);
             void Update_CHKnDATA(void);
             void Update_CHKldDATA(void);
             void Update_INSTLnDATA(void);
                 void Update_INSTLnDATA_PRJchanged(void);
                 void Update_CHKldDATA_PRJchanged(void);
};
#endif // MAINWINDOW_H
