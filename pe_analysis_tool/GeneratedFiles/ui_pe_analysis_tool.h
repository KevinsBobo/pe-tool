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
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeView *treeView;
    QStackedWidget *stackedWidget;
    QWidget *pageMain;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_2;
    QWidget *widget;
    QTableView *tableFileInfoUp;
    QWidget *widget_2;
    QTableView *tableFileInfoDown;
    QWidget *pageAddr;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_3;
    QTableView *tableAddr;
    QTextEdit *textEdit;

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
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(2);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setMaximumSize(QSize(16777215, 16777215));
        treeView->setBaseSize(QSize(0, 0));
        splitter->addWidget(treeView);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageMain = new QWidget();
        pageMain->setObjectName(QStringLiteral("pageMain"));
        verticalLayout_2 = new QVBoxLayout(pageMain);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(pageMain);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(2);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setAutoFillBackground(true);
        tableFileInfoUp = new QTableView(widget);
        tableFileInfoUp->setObjectName(QStringLiteral("tableFileInfoUp"));
        tableFileInfoUp->setGeometry(QRect(0, 0, 461, 261));
        tableFileInfoUp->setMaximumSize(QSize(16777215, 16777215));
        tableFileInfoUp->horizontalHeader()->setDefaultSectionSize(100);
        splitter_2->addWidget(widget);
        widget_2 = new QWidget(splitter_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        tableFileInfoDown = new QTableView(widget_2);
        tableFileInfoDown->setObjectName(QStringLiteral("tableFileInfoDown"));
        tableFileInfoDown->setGeometry(QRect(0, 0, 461, 141));
        tableFileInfoDown->setMaximumSize(QSize(16777215, 16777215));
        splitter_2->addWidget(widget_2);

        verticalLayout_2->addWidget(splitter_2);

        stackedWidget->addWidget(pageMain);
        pageAddr = new QWidget();
        pageAddr->setObjectName(QStringLiteral("pageAddr"));
        verticalLayout_3 = new QVBoxLayout(pageAddr);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(pageAddr);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setLineWidth(1);
        splitter_3->setOrientation(Qt::Vertical);
        splitter_3->setHandleWidth(2);
        tableAddr = new QTableView(splitter_3);
        tableAddr->setObjectName(QStringLiteral("tableAddr"));
        tableAddr->setMaximumSize(QSize(16777215, 16777215));
        tableAddr->setBaseSize(QSize(0, 0));
        splitter_3->addWidget(tableAddr);
        textEdit = new QTextEdit(splitter_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        splitter_3->addWidget(textEdit);

        verticalLayout_3->addWidget(splitter_3);

        stackedWidget->addWidget(pageAddr);
        splitter->addWidget(stackedWidget);

        verticalLayout->addWidget(splitter);

        pe_analysis_toolClass->setCentralWidget(centralWidget);
        tableFileInfoUp->raise();
        tableFileInfoDown->raise();
        splitter->raise();

        retranslateUi(pe_analysis_toolClass);

        stackedWidget->setCurrentIndex(0);


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
