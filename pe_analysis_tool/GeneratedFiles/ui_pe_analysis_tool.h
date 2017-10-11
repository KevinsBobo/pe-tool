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

    void setupUi(QMainWindow *pe_analysis_toolClass)
    {
        if (pe_analysis_toolClass->objectName().isEmpty())
            pe_analysis_toolClass->setObjectName(QStringLiteral("pe_analysis_toolClass"));
        pe_analysis_toolClass->resize(600, 400);
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
        pe_analysis_toolClass->setCentralWidget(centralWidget);

        retranslateUi(pe_analysis_toolClass);

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
