#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QApplication>
#include "ui_pe_analysis_tool.h"

class QAction;
class QLabel;
class QStatusBar;

extern QApplication* pApp;

class pe_analysis_tool : public QMainWindow
{
	Q_OBJECT

public:
	pe_analysis_tool(QWidget *parent = Q_NULLPTR);

// Qt4中必须要加slots，Qt5无限制
private slots:
  void open();
  void opensafe();
  void close();
  void save();
  void saveas();
  void preference();
  void aboutbox();
  void changeskin();

private:
	Ui::pe_analysis_toolClass ui;
  
  QAction* openAction;
  QAction* opensafeAction;
  QAction* closeAction;
  QAction* saveAction;
  QAction* saveasAction;
  QAction* preferenceAction;
  QAction* aboutAction;
  QAction* skinAction;
  QAction* sepAction; // 用于分割工具栏

  QMenu* file;
  QMenu* settings;
  QMenu* aboutmenu;

  QLabel* msgLabel;

  // QLayout* mainLayout;
  // QTreeView* analysisTree;
  // QTableView* analysisTable;
};
