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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
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
    QHBoxLayout *mainHorizontalLayout;
    QListView *listView;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout;

    void setupUi(QMainWindow *pe_analysis_toolClass)
    {
        if (pe_analysis_toolClass->objectName().isEmpty())
            pe_analysis_toolClass->setObjectName(QStringLiteral("pe_analysis_toolClass"));
        pe_analysis_toolClass->resize(978, 667);
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
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainHorizontalLayout = new QHBoxLayout();
        mainHorizontalLayout->setSpacing(0);
        mainHorizontalLayout->setObjectName(QStringLiteral("mainHorizontalLayout"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setMaximumSize(QSize(230, 16777215));

        mainHorizontalLayout->addWidget(listView);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(page_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_2->addWidget(tableView);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout = new QHBoxLayout(page_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget->addWidget(page_4);

        mainHorizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(mainHorizontalLayout);

        pe_analysis_toolClass->setCentralWidget(centralWidget);

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
