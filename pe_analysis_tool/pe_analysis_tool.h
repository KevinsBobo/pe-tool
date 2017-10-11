#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pe_analysis_tool.h"

class QAction;
class QLabel;
class QStatusBar;

class pe_analysis_tool : public QMainWindow
{
	Q_OBJECT

public:
	pe_analysis_tool(QWidget *parent = Q_NULLPTR);

private slots:
  void open();
  void opensafe();
  void close();
  void save();
  void saveas();
  void preference();
  void aboutbox();

private:
	Ui::pe_analysis_toolClass ui;
  
  QAction* openAction;
  QAction* opensafeAction;
  QAction* closeAction;
  QAction* saveAction;
  QAction* saveasAction;
  QAction* preferenceAction;
  QAction* aboutAction;

  QMenu* file;
  QMenu* settings;
  QMenu* aboutmenu;

  QLabel* msgLabel;

};
