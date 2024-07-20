/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_13;
    QLabel *Act_PID_label;
    QLabel *Act_PID_Value;
    QTextEdit *IRSnotes_TEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *CHKn_Label;
    QLabel *CHKn_Value;
    QHBoxLayout *horizontalLayout_7;
    QLabel *BID_label;
    QLabel *BID_Value;
    QFrame *line_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_14;
    QLabel *maxCHKn_label;
    QLabel *maxCHKn_Value;
    QHBoxLayout *horizontalLayout_16;
    QLabel *mAct_CHKID_label;
    QLabel *mAct_CHKID_Value;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ACID_Label;
    QLabel *ACID_Value;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QLabel *maxACID_label;
    QLabel *maxACID_Value;
    QPushButton *DummyBtn;
    QHBoxLayout *horizontalLayout_12;
    QLabel *mAct_PID_label;
    QLabel *mAct_PID_Value;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *CID_label;
    QLabel *CID_Value;
    QHBoxLayout *horizontalLayout_15;
    QLabel *Act_CHKID_label;
    QLabel *Act_CHKID_Value;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *LstBy_GrpBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *ALL_Btn;
    QRadioButton *CALIBd_Btn;
    QRadioButton *D6_Only_Btn;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *SrtBY_GrpBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *BID_RBtn;
    QRadioButton *NF_RBtn;
    QRadioButton *PM_RBtn;
    QRadioButton *SF_RBtn;
    QRadioButton *YM_RBtn;
    QRadioButton *RM_RBtn;
    QRadioButton *AF_RBtn;
    QRadioButton *Dia_RBtn;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *AscDec_GrpBox;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *Asc_RBtn;
    QRadioButton *Dec_RBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QLabel *InZro_label;
    QCheckBox *ShowZRO_ChkBx;
    QSpacerItem *horizontalSpacer_13;
    QTableView *BALANCE_LIST;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_3;
    QLabel *BALNME_LBL;
    QLabel *PRJNME_label;
    QVBoxLayout *verticalLayout_4;
    QLabel *BalNME_label;
    QLabel *PRJ_NME_Value;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *CIDspinLabel;
    QLabel *ACIDspinLabel;
    QVBoxLayout *verticalLayout_9;
    QSpinBox *CID_spinBox;
    QSpinBox *ACID_spinBox;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *Act_PID_SpinLabel;
    QLabel *Act_PIDrs_SpinLabel;
    QVBoxLayout *verticalLayout_8;
    QSpinBox *Act_PID_spinBox;
    QSpinBox *Act_PIDrs_spinBox;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout_5;
    QLabel *Act_CHKID_spinlabel;
    QLabel *Act_RSID_spinlabel;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *Act_CHKID_spinBox;
    QSpinBox *Act_RSID_spinBox;
    QLabel *Act_CHKnID_spinlabel;
    QSpinBox *Act_CHKnID_spinBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *CHKLd_ChkBx;
    QCheckBox *CHKnRS_ChkBx;
    QCheckBox *IsInstlRS_ChkBx;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *Context_label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *PID_label;
    QLabel *PID_Value;
    QSpacerItem *horizontalSpacer_15;
    QLabel *TABid_label;
    QLabel *TABid_Value;
    QSpacerItem *horizontalSpacer_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(805, 580);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(805, 580));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setVerticalSpacing(1);
        gridLayout_3->setContentsMargins(-1, -1, -1, 3);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(5, -1, 5, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, -1);
        Act_PID_label = new QLabel(centralwidget);
        Act_PID_label->setObjectName(QString::fromUtf8("Act_PID_label"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        Act_PID_label->setFont(font1);
        Act_PID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(Act_PID_label);

        Act_PID_Value = new QLabel(centralwidget);
        Act_PID_Value->setObjectName(QString::fromUtf8("Act_PID_Value"));
        Act_PID_Value->setFont(font);
        Act_PID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(Act_PID_Value);


        gridLayout->addLayout(horizontalLayout_13, 7, 1, 1, 1);

        IRSnotes_TEdit = new QTextEdit(centralwidget);
        IRSnotes_TEdit->setObjectName(QString::fromUtf8("IRSnotes_TEdit"));
        IRSnotes_TEdit->setFont(font);

        gridLayout->addWidget(IRSnotes_TEdit, 0, 0, 17, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 0);
        CHKn_Label = new QLabel(centralwidget);
        CHKn_Label->setObjectName(QString::fromUtf8("CHKn_Label"));
        CHKn_Label->setFont(font1);
        CHKn_Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(CHKn_Label);

        CHKn_Value = new QLabel(centralwidget);
        CHKn_Value->setObjectName(QString::fromUtf8("CHKn_Value"));
        CHKn_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(CHKn_Value);


        gridLayout->addLayout(horizontalLayout_9, 10, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        BID_label = new QLabel(centralwidget);
        BID_label->setObjectName(QString::fromUtf8("BID_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BID_label->sizePolicy().hasHeightForWidth());
        BID_label->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        BID_label->setFont(font2);
        BID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(BID_label);

        BID_Value = new QLabel(centralwidget);
        BID_Value->setObjectName(QString::fromUtf8("BID_Value"));
        sizePolicy2.setHeightForWidth(BID_Value->sizePolicy().hasHeightForWidth());
        BID_Value->setSizePolicy(sizePolicy2);
        BID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(BID_Value);

        horizontalLayout_7->setStretch(0, 50);
        horizontalLayout_7->setStretch(1, 50);

        gridLayout->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 0, -1, -1);
        maxCHKn_label = new QLabel(centralwidget);
        maxCHKn_label->setObjectName(QString::fromUtf8("maxCHKn_label"));
        maxCHKn_label->setFont(font1);
        maxCHKn_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(maxCHKn_label);

        maxCHKn_Value = new QLabel(centralwidget);
        maxCHKn_Value->setObjectName(QString::fromUtf8("maxCHKn_Value"));
        maxCHKn_Value->setFont(font);
        maxCHKn_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(maxCHKn_Value);


        gridLayout->addLayout(horizontalLayout_14, 9, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, 0, -1, -1);
        mAct_CHKID_label = new QLabel(centralwidget);
        mAct_CHKID_label->setObjectName(QString::fromUtf8("mAct_CHKID_label"));
        mAct_CHKID_label->setFont(font1);
        mAct_CHKID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(mAct_CHKID_label);

        mAct_CHKID_Value = new QLabel(centralwidget);
        mAct_CHKID_Value->setObjectName(QString::fromUtf8("mAct_CHKID_Value"));
        QFont font3;
        font3.setPointSize(8);
        mAct_CHKID_Value->setFont(font3);
        mAct_CHKID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(mAct_CHKID_Value);


        gridLayout->addLayout(horizontalLayout_16, 13, 1, 1, 1);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 11, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        ACID_Label = new QLabel(centralwidget);
        ACID_Label->setObjectName(QString::fromUtf8("ACID_Label"));
        sizePolicy2.setHeightForWidth(ACID_Label->sizePolicy().hasHeightForWidth());
        ACID_Label->setSizePolicy(sizePolicy2);
        ACID_Label->setFont(font1);
        ACID_Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(ACID_Label);

        ACID_Value = new QLabel(centralwidget);
        ACID_Value->setObjectName(QString::fromUtf8("ACID_Value"));
        sizePolicy2.setHeightForWidth(ACID_Value->sizePolicy().hasHeightForWidth());
        ACID_Value->setSizePolicy(sizePolicy2);
        ACID_Value->setMinimumSize(QSize(0, 0));
        ACID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(ACID_Value);

        horizontalLayout_6->setStretch(0, 50);
        horizontalLayout_6->setStretch(1, 50);

        gridLayout->addLayout(horizontalLayout_6, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        maxACID_label = new QLabel(centralwidget);
        maxACID_label->setObjectName(QString::fromUtf8("maxACID_label"));
        maxACID_label->setFont(font1);
        maxACID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(maxACID_label);

        maxACID_Value = new QLabel(centralwidget);
        maxACID_Value->setObjectName(QString::fromUtf8("maxACID_Value"));
        maxACID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(maxACID_Value);


        gridLayout->addLayout(horizontalLayout_11, 3, 1, 1, 1);

        DummyBtn = new QPushButton(centralwidget);
        DummyBtn->setObjectName(QString::fromUtf8("DummyBtn"));
        sizePolicy2.setHeightForWidth(DummyBtn->sizePolicy().hasHeightForWidth());
        DummyBtn->setSizePolicy(sizePolicy2);
        DummyBtn->setAutoDefault(true);

        gridLayout->addWidget(DummyBtn, 15, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        mAct_PID_label = new QLabel(centralwidget);
        mAct_PID_label->setObjectName(QString::fromUtf8("mAct_PID_label"));
        mAct_PID_label->setFont(font1);
        mAct_PID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(mAct_PID_label);

        mAct_PID_Value = new QLabel(centralwidget);
        mAct_PID_Value->setObjectName(QString::fromUtf8("mAct_PID_Value"));
        mAct_PID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(mAct_PID_Value);


        gridLayout->addLayout(horizontalLayout_12, 6, 1, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, 0);
        CID_label = new QLabel(centralwidget);
        CID_label->setObjectName(QString::fromUtf8("CID_label"));
        sizePolicy2.setHeightForWidth(CID_label->sizePolicy().hasHeightForWidth());
        CID_label->setSizePolicy(sizePolicy2);
        CID_label->setFont(font1);
        CID_label->setScaledContents(false);
        CID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(CID_label);

        CID_Value = new QLabel(centralwidget);
        CID_Value->setObjectName(QString::fromUtf8("CID_Value"));
        sizePolicy2.setHeightForWidth(CID_Value->sizePolicy().hasHeightForWidth());
        CID_Value->setSizePolicy(sizePolicy2);
        CID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(CID_Value);

        horizontalLayout_4->setStretch(0, 50);
        horizontalLayout_4->setStretch(1, 50);

        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        Act_CHKID_label = new QLabel(centralwidget);
        Act_CHKID_label->setObjectName(QString::fromUtf8("Act_CHKID_label"));
        Act_CHKID_label->setFont(font1);
        Act_CHKID_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(Act_CHKID_label);

        Act_CHKID_Value = new QLabel(centralwidget);
        Act_CHKID_Value->setObjectName(QString::fromUtf8("Act_CHKID_Value"));
        Act_CHKID_Value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(Act_CHKID_Value);


        gridLayout->addLayout(horizontalLayout_15, 14, 1, 1, 1);

        gridLayout->setColumnStretch(0, 90);

        gridLayout_3->addLayout(gridLayout, 8, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        LstBy_GrpBox = new QGroupBox(centralwidget);
        LstBy_GrpBox->setObjectName(QString::fromUtf8("LstBy_GrpBox"));
        LstBy_GrpBox->setBaseSize(QSize(0, 0));
        LstBy_GrpBox->setFont(font);
        LstBy_GrpBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(LstBy_GrpBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(0, 0, 1, 0);
        ALL_Btn = new QRadioButton(LstBy_GrpBox);
        ALL_Btn->setObjectName(QString::fromUtf8("ALL_Btn"));

        horizontalLayout->addWidget(ALL_Btn);

        CALIBd_Btn = new QRadioButton(LstBy_GrpBox);
        CALIBd_Btn->setObjectName(QString::fromUtf8("CALIBd_Btn"));
        CALIBd_Btn->setChecked(true);

        horizontalLayout->addWidget(CALIBd_Btn);

        D6_Only_Btn = new QRadioButton(LstBy_GrpBox);
        D6_Only_Btn->setObjectName(QString::fromUtf8("D6_Only_Btn"));

        horizontalLayout->addWidget(D6_Only_Btn);


        horizontalLayout_3->addWidget(LstBy_GrpBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        SrtBY_GrpBox = new QGroupBox(centralwidget);
        SrtBY_GrpBox->setObjectName(QString::fromUtf8("SrtBY_GrpBox"));
        SrtBY_GrpBox->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(SrtBY_GrpBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_2->setContentsMargins(-1, 0, 1, 0);
        BID_RBtn = new QRadioButton(SrtBY_GrpBox);
        BID_RBtn->setObjectName(QString::fromUtf8("BID_RBtn"));
        BID_RBtn->setChecked(false);

        horizontalLayout_2->addWidget(BID_RBtn);

        NF_RBtn = new QRadioButton(SrtBY_GrpBox);
        NF_RBtn->setObjectName(QString::fromUtf8("NF_RBtn"));

        horizontalLayout_2->addWidget(NF_RBtn);

        PM_RBtn = new QRadioButton(SrtBY_GrpBox);
        PM_RBtn->setObjectName(QString::fromUtf8("PM_RBtn"));

        horizontalLayout_2->addWidget(PM_RBtn);

        SF_RBtn = new QRadioButton(SrtBY_GrpBox);
        SF_RBtn->setObjectName(QString::fromUtf8("SF_RBtn"));

        horizontalLayout_2->addWidget(SF_RBtn);

        YM_RBtn = new QRadioButton(SrtBY_GrpBox);
        YM_RBtn->setObjectName(QString::fromUtf8("YM_RBtn"));

        horizontalLayout_2->addWidget(YM_RBtn);

        RM_RBtn = new QRadioButton(SrtBY_GrpBox);
        RM_RBtn->setObjectName(QString::fromUtf8("RM_RBtn"));

        horizontalLayout_2->addWidget(RM_RBtn);

        AF_RBtn = new QRadioButton(SrtBY_GrpBox);
        AF_RBtn->setObjectName(QString::fromUtf8("AF_RBtn"));

        horizontalLayout_2->addWidget(AF_RBtn);

        Dia_RBtn = new QRadioButton(SrtBY_GrpBox);
        Dia_RBtn->setObjectName(QString::fromUtf8("Dia_RBtn"));
        Dia_RBtn->setChecked(true);

        horizontalLayout_2->addWidget(Dia_RBtn);


        horizontalLayout_3->addWidget(SrtBY_GrpBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        AscDec_GrpBox = new QGroupBox(centralwidget);
        AscDec_GrpBox->setObjectName(QString::fromUtf8("AscDec_GrpBox"));
        AscDec_GrpBox->setMinimumSize(QSize(0, 0));
        AscDec_GrpBox->setSizeIncrement(QSize(0, 0));
        horizontalLayout_5 = new QHBoxLayout(AscDec_GrpBox);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Asc_RBtn = new QRadioButton(AscDec_GrpBox);
        Asc_RBtn->setObjectName(QString::fromUtf8("Asc_RBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Asc_RBtn->sizePolicy().hasHeightForWidth());
        Asc_RBtn->setSizePolicy(sizePolicy3);
        Asc_RBtn->setMinimumSize(QSize(0, 0));
        Asc_RBtn->setMaximumSize(QSize(16777215, 16777215));
        Asc_RBtn->setFont(font);
        Asc_RBtn->setChecked(true);

        horizontalLayout_5->addWidget(Asc_RBtn);

        Dec_RBtn = new QRadioButton(AscDec_GrpBox);
        Dec_RBtn->setObjectName(QString::fromUtf8("Dec_RBtn"));

        horizontalLayout_5->addWidget(Dec_RBtn);


        horizontalLayout_3->addWidget(AscDec_GrpBox);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(5, -1, 10, -1);
        InZro_label = new QLabel(centralwidget);
        InZro_label->setObjectName(QString::fromUtf8("InZro_label"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(InZro_label->sizePolicy().hasHeightForWidth());
        InZro_label->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(InZro_label);

        ShowZRO_ChkBx = new QCheckBox(centralwidget);
        ShowZRO_ChkBx->setObjectName(QString::fromUtf8("ShowZRO_ChkBx"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(2);
        sizePolicy5.setHeightForWidth(ShowZRO_ChkBx->sizePolicy().hasHeightForWidth());
        ShowZRO_ChkBx->setSizePolicy(sizePolicy5);
        ShowZRO_ChkBx->setMinimumSize(QSize(100, 24));
        ShowZRO_ChkBx->setMaximumSize(QSize(120, 25));
        ShowZRO_ChkBx->setSizeIncrement(QSize(2, 2));
        ShowZRO_ChkBx->setBaseSize(QSize(74, 24));
        ShowZRO_ChkBx->setIconSize(QSize(16, 16));
        ShowZRO_ChkBx->setChecked(false);

        verticalLayout->addWidget(ShowZRO_ChkBx);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        BALANCE_LIST = new QTableView(centralwidget);
        BALANCE_LIST->setObjectName(QString::fromUtf8("BALANCE_LIST"));
        sizePolicy2.setHeightForWidth(BALANCE_LIST->sizePolicy().hasHeightForWidth());
        BALANCE_LIST->setSizePolicy(sizePolicy2);
        BALANCE_LIST->setMaximumSize(QSize(16777215, 275));
        BALANCE_LIST->setSizeIncrement(QSize(0, 0));
        BALANCE_LIST->setFont(font);
        BALANCE_LIST->setAutoFillBackground(false);
        BALANCE_LIST->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(238, 238, 236);"));
        BALANCE_LIST->setLineWidth(0);
        BALANCE_LIST->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        BALANCE_LIST->setEditTriggers(QAbstractItemView::SelectedClicked);
        BALANCE_LIST->setTabKeyNavigation(false);
        BALANCE_LIST->setProperty("showDropIndicator", QVariant(true));
        BALANCE_LIST->setDragDropOverwriteMode(false);
        BALANCE_LIST->setAlternatingRowColors(true);
        BALANCE_LIST->setSelectionMode(QAbstractItemView::SingleSelection);
        BALANCE_LIST->setSelectionBehavior(QAbstractItemView::SelectRows);
        BALANCE_LIST->setTextElideMode(Qt::ElideMiddle);
        BALANCE_LIST->setGridStyle(Qt::NoPen);
        BALANCE_LIST->setSortingEnabled(false);
        BALANCE_LIST->setWordWrap(false);
        BALANCE_LIST->horizontalHeader()->setStretchLastSection(true);
        BALANCE_LIST->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(BALANCE_LIST, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 5, -1, 2);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, -1, -1, -1);
        BALNME_LBL = new QLabel(centralwidget);
        BALNME_LBL->setObjectName(QString::fromUtf8("BALNME_LBL"));
        QFont font4;
        font4.setBold(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        BALNME_LBL->setFont(font4);

        verticalLayout_3->addWidget(BALNME_LBL);

        PRJNME_label = new QLabel(centralwidget);
        PRJNME_label->setObjectName(QString::fromUtf8("PRJNME_label"));

        verticalLayout_3->addWidget(PRJNME_label);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, -1, -1, -1);
        BalNME_label = new QLabel(centralwidget);
        BalNME_label->setObjectName(QString::fromUtf8("BalNME_label"));
        sizePolicy2.setHeightForWidth(BalNME_label->sizePolicy().hasHeightForWidth());
        BalNME_label->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        BalNME_label->setFont(font5);
        BalNME_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(BalNME_label);

        PRJ_NME_Value = new QLabel(centralwidget);
        PRJ_NME_Value->setObjectName(QString::fromUtf8("PRJ_NME_Value"));

        verticalLayout_4->addWidget(PRJ_NME_Value);


        horizontalLayout_8->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(10, -1, -1, -1);
        CIDspinLabel = new QLabel(centralwidget);
        CIDspinLabel->setObjectName(QString::fromUtf8("CIDspinLabel"));
        CIDspinLabel->setMargin(0);
        CIDspinLabel->setIndent(3);

        verticalLayout_10->addWidget(CIDspinLabel);

        ACIDspinLabel = new QLabel(centralwidget);
        ACIDspinLabel->setObjectName(QString::fromUtf8("ACIDspinLabel"));
        ACIDspinLabel->setMargin(0);
        ACIDspinLabel->setIndent(3);

        verticalLayout_10->addWidget(ACIDspinLabel);


        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(10, -1, -1, -1);
        CID_spinBox = new QSpinBox(centralwidget);
        CID_spinBox->setObjectName(QString::fromUtf8("CID_spinBox"));
        CID_spinBox->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(CID_spinBox);

        ACID_spinBox = new QSpinBox(centralwidget);
        ACID_spinBox->setObjectName(QString::fromUtf8("ACID_spinBox"));
        ACID_spinBox->setAlignment(Qt::AlignCenter);
        ACID_spinBox->setReadOnly(false);

        verticalLayout_9->addWidget(ACID_spinBox);


        horizontalLayout_8->addLayout(verticalLayout_9);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(10, -1, -1, -1);
        Act_PID_SpinLabel = new QLabel(centralwidget);
        Act_PID_SpinLabel->setObjectName(QString::fromUtf8("Act_PID_SpinLabel"));
        Act_PID_SpinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Act_PID_SpinLabel->setIndent(3);

        verticalLayout_7->addWidget(Act_PID_SpinLabel);

        Act_PIDrs_SpinLabel = new QLabel(centralwidget);
        Act_PIDrs_SpinLabel->setObjectName(QString::fromUtf8("Act_PIDrs_SpinLabel"));
        Act_PIDrs_SpinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(Act_PIDrs_SpinLabel);


        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(10, -1, -1, -1);
        Act_PID_spinBox = new QSpinBox(centralwidget);
        Act_PID_spinBox->setObjectName(QString::fromUtf8("Act_PID_spinBox"));
        Act_PID_spinBox->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(Act_PID_spinBox);

        Act_PIDrs_spinBox = new QSpinBox(centralwidget);
        Act_PIDrs_spinBox->setObjectName(QString::fromUtf8("Act_PIDrs_spinBox"));

        verticalLayout_8->addWidget(Act_PIDrs_spinBox);


        horizontalLayout_8->addLayout(verticalLayout_8);

        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(10, -1, -1, -1);
        Act_CHKID_spinlabel = new QLabel(centralwidget);
        Act_CHKID_spinlabel->setObjectName(QString::fromUtf8("Act_CHKID_spinlabel"));
        Act_CHKID_spinlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(Act_CHKID_spinlabel);

        Act_RSID_spinlabel = new QLabel(centralwidget);
        Act_RSID_spinlabel->setObjectName(QString::fromUtf8("Act_RSID_spinlabel"));
        Act_RSID_spinlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(Act_RSID_spinlabel);


        horizontalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(10, -1, -1, -1);
        Act_CHKID_spinBox = new QSpinBox(centralwidget);
        Act_CHKID_spinBox->setObjectName(QString::fromUtf8("Act_CHKID_spinBox"));

        verticalLayout_6->addWidget(Act_CHKID_spinBox);

        Act_RSID_spinBox = new QSpinBox(centralwidget);
        Act_RSID_spinBox->setObjectName(QString::fromUtf8("Act_RSID_spinBox"));

        verticalLayout_6->addWidget(Act_RSID_spinBox);


        horizontalLayout_8->addLayout(verticalLayout_6);

        Act_CHKnID_spinlabel = new QLabel(centralwidget);
        Act_CHKnID_spinlabel->setObjectName(QString::fromUtf8("Act_CHKnID_spinlabel"));
        Act_CHKnID_spinlabel->setIndent(3);

        horizontalLayout_8->addWidget(Act_CHKnID_spinlabel);

        Act_CHKnID_spinBox = new QSpinBox(centralwidget);
        Act_CHKnID_spinBox->setObjectName(QString::fromUtf8("Act_CHKnID_spinBox"));
        sizePolicy3.setHeightForWidth(Act_CHKnID_spinBox->sizePolicy().hasHeightForWidth());
        Act_CHKnID_spinBox->setSizePolicy(sizePolicy3);
        Act_CHKnID_spinBox->setFont(font);
        Act_CHKnID_spinBox->setAlignment(Qt::AlignCenter);
        Act_CHKnID_spinBox->setSingleStep(1);
        Act_CHKnID_spinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_8->addWidget(Act_CHKnID_spinBox);

        horizontalSpacer_8 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(10, -1, -1, -1);
        CHKLd_ChkBx = new QCheckBox(centralwidget);
        CHKLd_ChkBx->setObjectName(QString::fromUtf8("CHKLd_ChkBx"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(CHKLd_ChkBx->sizePolicy().hasHeightForWidth());
        CHKLd_ChkBx->setSizePolicy(sizePolicy6);
        CHKLd_ChkBx->setFont(font3);

        verticalLayout_2->addWidget(CHKLd_ChkBx);

        CHKnRS_ChkBx = new QCheckBox(centralwidget);
        CHKnRS_ChkBx->setObjectName(QString::fromUtf8("CHKnRS_ChkBx"));
        sizePolicy4.setHeightForWidth(CHKnRS_ChkBx->sizePolicy().hasHeightForWidth());
        CHKnRS_ChkBx->setSizePolicy(sizePolicy4);
        CHKnRS_ChkBx->setFont(font3);
        CHKnRS_ChkBx->setIconSize(QSize(16, 16));
        CHKnRS_ChkBx->setChecked(true);

        verticalLayout_2->addWidget(CHKnRS_ChkBx);

        IsInstlRS_ChkBx = new QCheckBox(centralwidget);
        IsInstlRS_ChkBx->setObjectName(QString::fromUtf8("IsInstlRS_ChkBx"));
        sizePolicy6.setHeightForWidth(IsInstlRS_ChkBx->sizePolicy().hasHeightForWidth());
        IsInstlRS_ChkBx->setSizePolicy(sizePolicy6);
        IsInstlRS_ChkBx->setFont(font3);
        IsInstlRS_ChkBx->setCheckable(true);
        IsInstlRS_ChkBx->setChecked(false);
        IsInstlRS_ChkBx->setAutoExclusive(false);

        verticalLayout_2->addWidget(IsInstlRS_ChkBx);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 0);
        Context_label = new QLabel(centralwidget);
        Context_label->setObjectName(QString::fromUtf8("Context_label"));
        QFont font6;
        font6.setBold(false);
        font6.setUnderline(true);
        font6.setWeight(50);
        Context_label->setFont(font6);

        horizontalLayout_10->addWidget(Context_label);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        PID_label = new QLabel(centralwidget);
        PID_label->setObjectName(QString::fromUtf8("PID_label"));

        horizontalLayout_10->addWidget(PID_label);

        PID_Value = new QLabel(centralwidget);
        PID_Value->setObjectName(QString::fromUtf8("PID_Value"));

        horizontalLayout_10->addWidget(PID_Value);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        TABid_label = new QLabel(centralwidget);
        TABid_label->setObjectName(QString::fromUtf8("TABid_label"));
        TABid_label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_10->addWidget(TABid_label);

        TABid_Value = new QLabel(centralwidget);
        TABid_Value->setObjectName(QString::fromUtf8("TABid_Value"));
        TABid_Value->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout_10->addWidget(TABid_Value);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);


        gridLayout_3->addLayout(horizontalLayout_10, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 805, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CHKn/SCANn FINDER-VIEWER", nullptr));
        Act_PID_label->setText(QCoreApplication::translate("MainWindow", "Act-PID :", nullptr));
        Act_PID_Value->setText(QCoreApplication::translate("MainWindow", "66", nullptr));
        CHKn_Label->setText(QCoreApplication::translate("MainWindow", "   CHKn : ", nullptr));
        CHKn_Value->setText(QCoreApplication::translate("MainWindow", "44", nullptr));
        BID_label->setText(QCoreApplication::translate("MainWindow", "     BID :", nullptr));
        BID_Value->setText(QCoreApplication::translate("MainWindow", "33", nullptr));
        maxCHKn_label->setText(QCoreApplication::translate("MainWindow", "mCHKn :", nullptr));
        maxCHKn_Value->setText(QCoreApplication::translate("MainWindow", "77", nullptr));
        mAct_CHKID_label->setText(QCoreApplication::translate("MainWindow", "mAct_dataID :", nullptr));
        mAct_CHKID_Value->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
        ACID_Label->setText(QCoreApplication::translate("MainWindow", "    ACID :", nullptr));
        ACID_Value->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
        maxACID_label->setText(QCoreApplication::translate("MainWindow", "mACID :", nullptr));
        maxACID_Value->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        DummyBtn->setText(QCoreApplication::translate("MainWindow", "DummyBtn", nullptr));
        mAct_PID_label->setText(QCoreApplication::translate("MainWindow", "mAct-PID :", nullptr));
        mAct_PID_Value->setText(QCoreApplication::translate("MainWindow", "55", nullptr));
        CID_label->setText(QCoreApplication::translate("MainWindow", "      CID :", nullptr));
        CID_Value->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        Act_CHKID_label->setText(QCoreApplication::translate("MainWindow", "Act_dataID :", nullptr));
        Act_CHKID_Value->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        LstBy_GrpBox->setTitle(QCoreApplication::translate("MainWindow", "LIST :", nullptr));
        ALL_Btn->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        CALIBd_Btn->setText(QCoreApplication::translate("MainWindow", "Calibrated", nullptr));
        D6_Only_Btn->setText(QCoreApplication::translate("MainWindow", "6 Cmpnt ", nullptr));
        SrtBY_GrpBox->setTitle(QCoreApplication::translate("MainWindow", "SORT BY :", nullptr));
        BID_RBtn->setText(QCoreApplication::translate("MainWindow", "BID", nullptr));
        NF_RBtn->setText(QCoreApplication::translate("MainWindow", "NF", nullptr));
        PM_RBtn->setText(QCoreApplication::translate("MainWindow", "PM", nullptr));
        SF_RBtn->setText(QCoreApplication::translate("MainWindow", "SF", nullptr));
        YM_RBtn->setText(QCoreApplication::translate("MainWindow", "YM", nullptr));
        RM_RBtn->setText(QCoreApplication::translate("MainWindow", "RM", nullptr));
        AF_RBtn->setText(QCoreApplication::translate("MainWindow", "AF", nullptr));
        Dia_RBtn->setText(QCoreApplication::translate("MainWindow", "Dia", nullptr));
        AscDec_GrpBox->setTitle(QCoreApplication::translate("MainWindow", "SORT :", nullptr));
        Asc_RBtn->setText(QCoreApplication::translate("MainWindow", "Asc", nullptr));
        Dec_RBtn->setText(QCoreApplication::translate("MainWindow", "Dec", nullptr));
        InZro_label->setText(QCoreApplication::translate("MainWindow", "For: NF...Dia.", nullptr));
        ShowZRO_ChkBx->setText(QCoreApplication::translate("MainWindow", "Incl.Zeros?    ", nullptr));
        BALNME_LBL->setText(QCoreApplication::translate("MainWindow", "BALANCE :    ", nullptr));
        PRJNME_label->setText(QCoreApplication::translate("MainWindow", "PRJ. NAME :", nullptr));
        BalNME_label->setText(QCoreApplication::translate("MainWindow", "Balance Name", nullptr));
        PRJ_NME_Value->setText(QCoreApplication::translate("MainWindow", "PROJECT", nullptr));
        CIDspinLabel->setText(QCoreApplication::translate("MainWindow", "CID :", nullptr));
        ACIDspinLabel->setText(QCoreApplication::translate("MainWindow", "ACID :", nullptr));
        Act_PID_SpinLabel->setText(QCoreApplication::translate("MainWindow", "Act-PIDcl :", nullptr));
        Act_PIDrs_SpinLabel->setText(QCoreApplication::translate("MainWindow", "Act-PIDrs : ", nullptr));
        Act_CHKID_spinlabel->setText(QCoreApplication::translate("MainWindow", " Act_CHKID : ", nullptr));
        Act_RSID_spinlabel->setText(QCoreApplication::translate("MainWindow", "Act_RSID :", nullptr));
        Act_CHKnID_spinlabel->setText(QCoreApplication::translate("MainWindow", "CHKn :", nullptr));
        CHKLd_ChkBx->setText(QCoreApplication::translate("MainWindow", "CHK Ld", nullptr));
        CHKnRS_ChkBx->setText(QCoreApplication::translate("MainWindow", "CHKn RS", nullptr));
        IsInstlRS_ChkBx->setText(QCoreApplication::translate("MainWindow", "INSTln RS", nullptr));
        Context_label->setText(QCoreApplication::translate("MainWindow", "CHKn Context Notes : (RS_DATA_CHKn - not project linked)", nullptr));
        PID_label->setText(QCoreApplication::translate("MainWindow", "PID : ", nullptr));
        PID_Value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        TABid_label->setText(QCoreApplication::translate("MainWindow", "TABid :", nullptr));
        TABid_Value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
