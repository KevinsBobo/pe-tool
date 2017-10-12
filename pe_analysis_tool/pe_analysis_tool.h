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
  // 点击树控件后切换堆栈控件页面
  void treeViewClicked(QModelIndex index);

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

  // 树控件和堆栈空间节点/页面顺序
  enum emTreeId
  {
    tid_exe = 0,
    tid_dos,
    tid_nt,
    tid_file,
    tid_optional,
    tid_data,
    tid_section,
    tid_import,
    tid_relocation,
    tid_debug,
    tid_address,
    tid_dependency,
    tid_hex,
    tid_identifier,
    tid_importadder,
    tid_quick,
    tid_rebuilder,
    tid_resource,
    tid_upx,
    tid_null,
  };

};
