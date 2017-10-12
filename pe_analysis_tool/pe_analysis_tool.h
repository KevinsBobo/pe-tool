#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QApplication>
#include "ui_pe_analysis_tool.h"
#include <QFile>

class QAction;
class QLabel;
class QStatusBar;
class QDragEnterEvent;
class QDropEvent;
class QStandardItemModel;

extern QApplication* pApp;

class pe_analysis_tool : public QMainWindow
{
	Q_OBJECT

public:
	pe_analysis_tool(QWidget *parent = Q_NULLPTR);

// Qt4中必须要加slots，Qt5无限制
private:
  void open();
  void opensafe();
  void close();
  void save();
  void saveas();
  void preference();
  void aboutbox();
  void changeskin();
  // 打开文件，bMode = false 为只读打开
  bool openFile(const QString& strFile, bool bMode = true);
  void initTreeView();

protected:
  void dragEnterEvent(QDragEnterEvent* event);  // 拖动进入事件
  void dropEvent(QDropEvent* event); // 拖动放下事件


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

  QFile peFile;
  QString peName;

  QStandardItemModel* treeModel;
};
