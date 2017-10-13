/********************************************************************************
** Form generated from reading UI file 'pe_analysis_tool.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PE_ANALYSIS_TOOL_H
#define UI_PE_ANALYSIS_TOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pe_analysis_toolClass
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPer;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QStackedWidget *stackedWidget;
    QWidget *pageMain;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QTableView *tableFileInfoUp;
    QTableView *tableFileInfoDown;
    QWidget *pageDos;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableDos;
    QWidget *pageNt;
    QVBoxLayout *verticalLayout_5;
    QTableView *tableNt;
    QWidget *pageFile;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableFile;
    QWidget *pageOpt;
    QVBoxLayout *verticalLayout_7;
    QTableView *tableOpt;
    QWidget *pageData;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableData;
    QWidget *pageSec;
    QVBoxLayout *verticalLayout_9;
    QSplitter *splitter;
    QTableView *tableSec;
    QTextEdit *textEditSec;
    QWidget *widgetSec;
    QWidget *pageExp;
    QVBoxLayout *verticalLayout_10;
    QSplitter *splitter_4;
    QTableView *tableExpUp;
    QTableView *tableExpDown;
    QWidget *pageImpDir;
    QVBoxLayout *verticalLayout_11;
    QSplitter *splitter_5;
    QTableView *tableImpDirUp;
    QTableView *tableImpDirDown;
    QWidget *pageRes;
    QVBoxLayout *verticalLayout_12;
    QSplitter *splitter_6;
    QTreeView *treeRes;
    QTableView *tableRes;
    QWidget *pageRel;
    QVBoxLayout *verticalLayout_13;
    QSplitter *splitter_7;
    QTableView *tableRelUp;
    QTableView *tableRelDown;
    QWidget *pageDebug;
    QVBoxLayout *verticalLayout_14;
    QTableView *tableDebug;
    QWidget *pageAddr;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_3;
    QTableView *tableAddr;
    QWidget *widgetAddr;
    QWidget *pageDep;
    QVBoxLayout *verticalLayout_15;
    QSplitter *splitter_9;
    QTreeView *treeDep;
    QSplitter *splitter_8;
    QTableView *tableDepUp;
    QTableView *tableDepDown;
    QWidget *pageHex;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetHex;
    QWidget *pageIde;
    QWidget *pageImpAdder;
    QWidget *pageQui;
    QWidget *pageReb;
    QWidget *pageResEdit;
    QWidget *pageUpx;
    QWidget *pageNull;

    void setupUi(QMainWindow *pe_analysis_toolClass)
    {
        if (pe_analysis_toolClass->objectName().isEmpty())
            pe_analysis_toolClass->setObjectName(QStringLiteral("pe_analysis_toolClass"));
        pe_analysis_toolClass->resize(967, 667);
        actionOpen = new QAction(pe_analysis_toolClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionClose = new QAction(pe_analysis_toolClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionSave = new QAction(pe_analysis_toolClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(pe_analysis_toolClass);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionPer = new QAction(pe_analysis_toolClass);
        actionPer->setObjectName(QStringLiteral("actionPer"));
        centralWidget = new QWidget(pe_analysis_toolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setMaximumSize(QSize(260, 16777215));
        treeView->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(treeView);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageMain = new QWidget();
        pageMain->setObjectName(QStringLiteral("pageMain"));
        sizePolicy.setHeightForWidth(pageMain->sizePolicy().hasHeightForWidth());
        pageMain->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(pageMain);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(pageMain);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(1);
        tableFileInfoUp = new QTableView(splitter_2);
        tableFileInfoUp->setObjectName(QStringLiteral("tableFileInfoUp"));
        sizePolicy.setHeightForWidth(tableFileInfoUp->sizePolicy().hasHeightForWidth());
        tableFileInfoUp->setSizePolicy(sizePolicy);
        splitter_2->addWidget(tableFileInfoUp);
        tableFileInfoDown = new QTableView(splitter_2);
        tableFileInfoDown->setObjectName(QStringLiteral("tableFileInfoDown"));
        sizePolicy.setHeightForWidth(tableFileInfoDown->sizePolicy().hasHeightForWidth());
        tableFileInfoDown->setSizePolicy(sizePolicy);
        splitter_2->addWidget(tableFileInfoDown);

        verticalLayout->addWidget(splitter_2);

        stackedWidget->addWidget(pageMain);
        pageDos = new QWidget();
        pageDos->setObjectName(QStringLiteral("pageDos"));
        verticalLayout_4 = new QVBoxLayout(pageDos);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableDos = new QTableView(pageDos);
        tableDos->setObjectName(QStringLiteral("tableDos"));

        verticalLayout_4->addWidget(tableDos);

        stackedWidget->addWidget(pageDos);
        pageNt = new QWidget();
        pageNt->setObjectName(QStringLiteral("pageNt"));
        verticalLayout_5 = new QVBoxLayout(pageNt);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableNt = new QTableView(pageNt);
        tableNt->setObjectName(QStringLiteral("tableNt"));

        verticalLayout_5->addWidget(tableNt);

        stackedWidget->addWidget(pageNt);
        pageFile = new QWidget();
        pageFile->setObjectName(QStringLiteral("pageFile"));
        verticalLayout_6 = new QVBoxLayout(pageFile);
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tableFile = new QTableView(pageFile);
        tableFile->setObjectName(QStringLiteral("tableFile"));

        verticalLayout_6->addWidget(tableFile);

        stackedWidget->addWidget(pageFile);
        pageOpt = new QWidget();
        pageOpt->setObjectName(QStringLiteral("pageOpt"));
        verticalLayout_7 = new QVBoxLayout(pageOpt);
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tableOpt = new QTableView(pageOpt);
        tableOpt->setObjectName(QStringLiteral("tableOpt"));

        verticalLayout_7->addWidget(tableOpt);

        stackedWidget->addWidget(pageOpt);
        pageData = new QWidget();
        pageData->setObjectName(QStringLiteral("pageData"));
        verticalLayout_8 = new QVBoxLayout(pageData);
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        tableData = new QTableView(pageData);
        tableData->setObjectName(QStringLiteral("tableData"));

        verticalLayout_8->addWidget(tableData);

        stackedWidget->addWidget(pageData);
        pageSec = new QWidget();
        pageSec->setObjectName(QStringLiteral("pageSec"));
        verticalLayout_9 = new QVBoxLayout(pageSec);
        verticalLayout_9->setSpacing(3);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(pageSec);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(2);
        tableSec = new QTableView(splitter);
        tableSec->setObjectName(QStringLiteral("tableSec"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tableSec->sizePolicy().hasHeightForWidth());
        tableSec->setSizePolicy(sizePolicy1);
        splitter->addWidget(tableSec);
        textEditSec = new QTextEdit(splitter);
        textEditSec->setObjectName(QStringLiteral("textEditSec"));
        textEditSec->setMaximumSize(QSize(16777215, 80));
        textEditSec->setReadOnly(false);
        splitter->addWidget(textEditSec);
        widgetSec = new QWidget(splitter);
        widgetSec->setObjectName(QStringLiteral("widgetSec"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(widgetSec->sizePolicy().hasHeightForWidth());
        widgetSec->setSizePolicy(sizePolicy2);
        splitter->addWidget(widgetSec);

        verticalLayout_9->addWidget(splitter);

        stackedWidget->addWidget(pageSec);
        pageExp = new QWidget();
        pageExp->setObjectName(QStringLiteral("pageExp"));
        verticalLayout_10 = new QVBoxLayout(pageExp);
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(pageExp);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_4->setHandleWidth(2);
        tableExpUp = new QTableView(splitter_4);
        tableExpUp->setObjectName(QStringLiteral("tableExpUp"));
        splitter_4->addWidget(tableExpUp);
        tableExpDown = new QTableView(splitter_4);
        tableExpDown->setObjectName(QStringLiteral("tableExpDown"));
        splitter_4->addWidget(tableExpDown);

        verticalLayout_10->addWidget(splitter_4);

        stackedWidget->addWidget(pageExp);
        pageImpDir = new QWidget();
        pageImpDir->setObjectName(QStringLiteral("pageImpDir"));
        verticalLayout_11 = new QVBoxLayout(pageImpDir);
        verticalLayout_11->setSpacing(3);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        splitter_5 = new QSplitter(pageImpDir);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        splitter_5->setHandleWidth(2);
        tableImpDirUp = new QTableView(splitter_5);
        tableImpDirUp->setObjectName(QStringLiteral("tableImpDirUp"));
        splitter_5->addWidget(tableImpDirUp);
        tableImpDirDown = new QTableView(splitter_5);
        tableImpDirDown->setObjectName(QStringLiteral("tableImpDirDown"));
        splitter_5->addWidget(tableImpDirDown);

        verticalLayout_11->addWidget(splitter_5);

        stackedWidget->addWidget(pageImpDir);
        pageRes = new QWidget();
        pageRes->setObjectName(QStringLiteral("pageRes"));
        verticalLayout_12 = new QVBoxLayout(pageRes);
        verticalLayout_12->setSpacing(3);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        splitter_6 = new QSplitter(pageRes);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setOrientation(Qt::Vertical);
        splitter_6->setHandleWidth(2);
        treeRes = new QTreeView(splitter_6);
        treeRes->setObjectName(QStringLiteral("treeRes"));
        splitter_6->addWidget(treeRes);
        tableRes = new QTableView(splitter_6);
        tableRes->setObjectName(QStringLiteral("tableRes"));
        splitter_6->addWidget(tableRes);

        verticalLayout_12->addWidget(splitter_6);

        stackedWidget->addWidget(pageRes);
        pageRel = new QWidget();
        pageRel->setObjectName(QStringLiteral("pageRel"));
        verticalLayout_13 = new QVBoxLayout(pageRel);
        verticalLayout_13->setSpacing(3);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        splitter_7 = new QSplitter(pageRel);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setOrientation(Qt::Vertical);
        splitter_7->setHandleWidth(0);
        tableRelUp = new QTableView(splitter_7);
        tableRelUp->setObjectName(QStringLiteral("tableRelUp"));
        splitter_7->addWidget(tableRelUp);
        tableRelDown = new QTableView(splitter_7);
        tableRelDown->setObjectName(QStringLiteral("tableRelDown"));
        splitter_7->addWidget(tableRelDown);

        verticalLayout_13->addWidget(splitter_7);

        stackedWidget->addWidget(pageRel);
        pageDebug = new QWidget();
        pageDebug->setObjectName(QStringLiteral("pageDebug"));
        verticalLayout_14 = new QVBoxLayout(pageDebug);
        verticalLayout_14->setSpacing(3);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        tableDebug = new QTableView(pageDebug);
        tableDebug->setObjectName(QStringLiteral("tableDebug"));

        verticalLayout_14->addWidget(tableDebug);

        stackedWidget->addWidget(pageDebug);
        pageAddr = new QWidget();
        pageAddr->setObjectName(QStringLiteral("pageAddr"));
        sizePolicy.setHeightForWidth(pageAddr->sizePolicy().hasHeightForWidth());
        pageAddr->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(pageAddr);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(pageAddr);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        sizePolicy.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy);
        splitter_3->setLineWidth(1);
        splitter_3->setOrientation(Qt::Vertical);
        splitter_3->setHandleWidth(3);
        tableAddr = new QTableView(splitter_3);
        tableAddr->setObjectName(QStringLiteral("tableAddr"));
        tableAddr->setMaximumSize(QSize(16777215, 100));
        tableAddr->setBaseSize(QSize(0, 0));
        splitter_3->addWidget(tableAddr);
        widgetAddr = new QWidget(splitter_3);
        widgetAddr->setObjectName(QStringLiteral("widgetAddr"));
        sizePolicy1.setHeightForWidth(widgetAddr->sizePolicy().hasHeightForWidth());
        widgetAddr->setSizePolicy(sizePolicy1);
        splitter_3->addWidget(widgetAddr);

        verticalLayout_3->addWidget(splitter_3);

        stackedWidget->addWidget(pageAddr);
        pageDep = new QWidget();
        pageDep->setObjectName(QStringLiteral("pageDep"));
        verticalLayout_15 = new QVBoxLayout(pageDep);
        verticalLayout_15->setSpacing(3);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        splitter_9 = new QSplitter(pageDep);
        splitter_9->setObjectName(QStringLiteral("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        splitter_9->setHandleWidth(2);
        treeDep = new QTreeView(splitter_9);
        treeDep->setObjectName(QStringLiteral("treeDep"));
        splitter_9->addWidget(treeDep);
        splitter_8 = new QSplitter(splitter_9);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(splitter_8->sizePolicy().hasHeightForWidth());
        splitter_8->setSizePolicy(sizePolicy3);
        splitter_8->setOrientation(Qt::Vertical);
        splitter_8->setHandleWidth(2);
        tableDepUp = new QTableView(splitter_8);
        tableDepUp->setObjectName(QStringLiteral("tableDepUp"));
        splitter_8->addWidget(tableDepUp);
        tableDepDown = new QTableView(splitter_8);
        tableDepDown->setObjectName(QStringLiteral("tableDepDown"));
        splitter_8->addWidget(tableDepDown);
        splitter_9->addWidget(splitter_8);

        verticalLayout_15->addWidget(splitter_9);

        stackedWidget->addWidget(pageDep);
        pageHex = new QWidget();
        pageHex->setObjectName(QStringLiteral("pageHex"));
        verticalLayout_2 = new QVBoxLayout(pageHex);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetHex = new QWidget(pageHex);
        widgetHex->setObjectName(QStringLiteral("widgetHex"));

        verticalLayout_2->addWidget(widgetHex);

        stackedWidget->addWidget(pageHex);
        pageIde = new QWidget();
        pageIde->setObjectName(QStringLiteral("pageIde"));
        stackedWidget->addWidget(pageIde);
        pageImpAdder = new QWidget();
        pageImpAdder->setObjectName(QStringLiteral("pageImpAdder"));
        stackedWidget->addWidget(pageImpAdder);
        pageQui = new QWidget();
        pageQui->setObjectName(QStringLiteral("pageQui"));
        stackedWidget->addWidget(pageQui);
        pageReb = new QWidget();
        pageReb->setObjectName(QStringLiteral("pageReb"));
        stackedWidget->addWidget(pageReb);
        pageResEdit = new QWidget();
        pageResEdit->setObjectName(QStringLiteral("pageResEdit"));
        stackedWidget->addWidget(pageResEdit);
        pageUpx = new QWidget();
        pageUpx->setObjectName(QStringLiteral("pageUpx"));
        stackedWidget->addWidget(pageUpx);
        pageNull = new QWidget();
        pageNull->setObjectName(QStringLiteral("pageNull"));
        stackedWidget->addWidget(pageNull);

        horizontalLayout->addWidget(stackedWidget);


        horizontalLayout_2->addLayout(horizontalLayout);

        pe_analysis_toolClass->setCentralWidget(centralWidget);

        retranslateUi(pe_analysis_toolClass);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(pe_analysis_toolClass);
    } // setupUi

    void retranslateUi(QMainWindow *pe_analysis_toolClass)
    {
        pe_analysis_toolClass->setWindowTitle(QApplication::translate("pe_analysis_toolClass", "pe_analysis_tool", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("pe_analysis_toolClass", "Open", Q_NULLPTR));
        actionClose->setText(QApplication::translate("pe_analysis_toolClass", "Close", Q_NULLPTR));
        actionSave->setText(QApplication::translate("pe_analysis_toolClass", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("pe_analysis_toolClass", "Save As...", Q_NULLPTR));
        actionPer->setText(QApplication::translate("pe_analysis_toolClass", "Preferences", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pe_analysis_toolClass: public Ui_pe_analysis_toolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PE_ANALYSIS_TOOL_H
