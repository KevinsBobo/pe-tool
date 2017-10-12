#include "pe_analysis_tool.h"
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QMessageBox>
#include <QFileDialog>
#include <QLabel>
#include <QStatusBar>
#include <QPainter>
#include <QHBoxLayout>
#include <QTreeView>
#include <QTableView>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QDropEvent>
#include <QUrl>
#include <QStandardItemModel>

pe_analysis_tool::pe_analysis_tool(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

  // 设置图标
  setWindowIcon(QIcon(":/img/Don_2.jpg"));
  // 设置标题
  setWindowTitle(QString::fromLocal8Bit("PE解析工具"));
  // 设置大小
  // resize(800, 600);

  // 设置皮肤
  changeskin();

  // 接收拖放
  setAcceptDrops(true);

  // 创建分割用的Action
  sepAction = new QAction(this);
  sepAction->setEnabled(false);

  // 创建工具栏
  QToolBar* toolBar = new QToolBar(this);
  addToolBar(Qt::TopToolBarArea, toolBar);
  toolBar->setMovable(false);
  // toolBar->setStyleSheet(QString("QStatusBar::body{background-color:transparent}"));

  // 创建一个打开文件的控件
  openAction = new QAction(tr("Open"), this);
  openAction->setShortcut(QKeySequence::Open);
  openAction->setStatusTip(tr("Open a file."));
  openAction->setIcon(QIcon(":/img/open_file.png"));
  // 绑定该控件的信号槽
  connect(openAction, &QAction::triggered, this, &pe_analysis_tool::open);
  // 将控件绑定到菜单栏
  file = menuBar()->addMenu(tr("&File"));
  file->addAction(openAction);
  // 将控件绑定到工具栏
  toolBar->addAction(openAction);

  // 创建一个安全打开文件的控件
  opensafeAction = new QAction(tr("Open (Safe Mode)"), this);
  opensafeAction->setStatusTip(tr("Open (Safe Mode)."));
  // 绑定该控件的信号槽
  connect(opensafeAction, &QAction::triggered, this, &pe_analysis_tool::opensafe);
  // 将控件绑定到菜单栏
  file->addAction(opensafeAction);

  // 创建一个关闭文件的控件
  closeAction = new QAction(tr("Close"), this);
  closeAction->setShortcut(QKeySequence::Close);
  closeAction->setStatusTip(tr("Close file."));
  // 绑定该控件的信号槽
  connect(closeAction, &QAction::triggered, this, &pe_analysis_tool::close);
  // 将控件绑定到菜单栏
  file->addAction(closeAction);

  // 菜单分割线
  file->addSeparator();

  // 创建一个保存文件的控件
  saveAction = new QAction(tr("Save"), this);
  saveAction->setShortcut(QKeySequence::Save);
  saveAction->setStatusTip(tr("Save file."));
  saveAction->setIcon(QIcon(":/img/save_file.png"));
  // 初始设置该控件不能使用
  saveAction->setEnabled(false);
  // 绑定该控件的信号槽
  connect(saveAction, &QAction::triggered, this, &pe_analysis_tool::save);
  // 将控件绑定到菜单栏
  file->addAction(saveAction);
  // 将控件绑定到工具栏
  toolBar->addAction(saveAction);
  // toolBar->addSeparator();

  // 创建一个另存文件的控件
  saveasAction = new QAction(tr("Save As..."), this);
  saveasAction->setShortcut(QKeySequence::SaveAs);
  saveasAction->setStatusTip(tr("Save As."));
  // 绑定该控件的信号槽
  connect(saveasAction, &QAction::triggered, this, &pe_analysis_tool::saveas);
  // 将控件绑定到菜单栏
  file->addAction(saveasAction);

  // 创建一个配置的控件
  preferenceAction = new QAction(tr("Preference"), this);
  preferenceAction->setStatusTip(tr("Preference."));
  preferenceAction->setIcon(QIcon(":/img/tool.png"));
  // 绑定该控件的信号槽
  connect(preferenceAction, &QAction::triggered, this, &pe_analysis_tool::preference);
  // 将控件绑定到菜单栏
  settings = menuBar()->addMenu(tr("&Settings"));
  settings->addAction(preferenceAction);

  // 创建一个切换皮肤的控件
  aboutAction = new QAction(tr("Change Skin"), this);
  aboutAction->setStatusTip(tr("Change Skin."));
  aboutAction->setIcon(QIcon(":/img/Don_2.jpg"));
  // 绑定该控件的信号槽
  connect(aboutAction, &QAction::triggered, this, &pe_analysis_tool::changeskin);
  // 将关于控件绑定到菜单栏
  aboutmenu = menuBar()->addMenu(tr("&Help"));
  aboutmenu->addAction(aboutAction);
  // 在工具栏创建一个分割区域
  toolBar->addAction(sepAction);
  // 将控件绑定到工具栏
  toolBar->addAction(aboutAction);

  // 创建一个关于的控件
  aboutAction = new QAction(tr("About"), this);
  aboutAction->setStatusTip(tr("About."));
  aboutAction->setIcon(QIcon(":/img/Don.png"));
  // 绑定该控件的信号槽
  connect(aboutAction, &QAction::triggered, this, &pe_analysis_tool::aboutbox);
  // 将关于控件绑定到菜单栏
  // menuBar()->addMenu(QIcon(":/img/Don.png"), tr("About"));
  aboutmenu->addAction(aboutAction);
  // 将控件绑定到工具栏
  toolBar->addAction(aboutAction);


  
  // 设置状态栏
  msgLabel = new QLabel;
  msgLabel->setMinimumSize(msgLabel->sizeHint());
  msgLabel->setAlignment(Qt::AlignHCenter);
  statusBar()->addWidget(msgLabel);
  // 去掉状态栏无文字显示时的小框
  statusBar()->setStyleSheet(QString("QStatusBar::item{border: 0px}"));


  // 创建树控件内容
  treeModel = new QStandardItemModel(ui.treeView);
  ui.treeView->setModel(treeModel);
  // 隐藏表头
  ui.treeView->setHeaderHidden(true);
  // model->setHorizontalHeaderItem(0, itemPE); // 设置表头
  // 连接信号槽
  connect(ui.treeView, &QTreeView::clicked, this, &pe_analysis_tool::treeViewClicked);

  // 将右侧界面切换到空界面
  ui.stackedWidget->setCurrentIndex(tid_null);
}

void pe_analysis_tool::open()
{
  // QMessageBox* msgBox;
  // msgBox = new QMessageBox;
  // msgBox->information(NULL, tr("Open"), tr("Open a file"));
  // 弹出一个打开文件的对话框
  QString path = QFileDialog::getOpenFileName(this,                 // 父窗口指针
                                              tr("Open File"),      // 弹出窗口的名称
                                              ".",                  // 打开文件的路径
                                              tr("All Files(*.*)")  // 文件类型，括号里面可以通过通配符指定文件类型
                                              
                                             );
  // 另一种写法
  // QFileDialog* fileDialog = new QFileDialog(this);
  // fileDialog->setWindowTitle(tr("Open Fise"));
  // fileDialog->setDirectory(".");
  // // fileDialog->setFilter(tr("All Files(*.*)")); // 不能使用这种筛选方式
  // fileDialog->setFilter(QDir::Filters::enum_type::AllDirs);
  // fileDialog->exec();

  openFile(path);
}

void pe_analysis_tool::opensafe()
{
  QString path = QFileDialog::getOpenFileName(this,                 // 父窗口指针
                                              tr("Open File"),      // 弹出窗口的名称
                                              ".",                  // 打开文件的路径
                                              tr("All Files(*.*)")  // 文件类型，括号里面可以通过通配符指定文件类型
                                             );
  openFile(path, false);
}

void pe_analysis_tool::close()
{
}

void pe_analysis_tool::save()
{
  QMessageBox* msgBox;
  msgBox = new QMessageBox;
  msgBox->information(NULL, tr("Save"), tr("Save a file"));
}

void pe_analysis_tool::saveas()
{
  QString path = QFileDialog::getOpenFileName(this,                 // 父窗口指针
                                              tr("Open File"),      // 弹出窗口的名称
                                              ".",                  // 打开文件的路径
                                              tr("All Files(*.*)")  // 文件类型，括号里面可以通过通配符指定文件类型
                                             );
}

void pe_analysis_tool::preference()
{
}

void pe_analysis_tool::aboutbox()
{
  QMessageBox aboutmsg(QMessageBox::NoIcon, tr("About"), QString::fromLocal8Bit("本程序使用 <font color='blue'>Qt</font> 开发<br><br>源码：<a href='https://github.com/KevinsBobo/pe-tool'>https://github.com/KevinsBobo/pe-tool</a><br><br>作者博客：<a href='https://kevins.pro'>https://kevins.pro</a>"));
  QPixmap pic(":/img/Don.png");
  QSize size;
  size.setHeight(10);
  size.setWidth(10);
  pic.scaled(size, Qt::KeepAspectRatio);
  aboutmsg.setIconPixmap(pic);
  aboutmsg.exec();
}

void pe_analysis_tool::changeskin()
{
  static int nNum = 0;

  if (nNum == 0)
  {
    pApp->setStyleSheet("");
  }
  else if (nNum == 1)
  {
    QFile qss(":/skin/write.qss");
    qss.open(QFile::ReadOnly);
    pApp->setStyleSheet(qss.readAll());
    qss.close();
  }
  else
  {
    QFile qss(":/skin/black.qss");
    qss.open(QFile::ReadOnly);
    pApp->setStyleSheet(qss.readAll());
    qss.close();
  }

  nNum += 1;
  nNum %= 3;
}

bool pe_analysis_tool::openFile(const QString & strFile, bool bMode)
{
  bool bRet = false;
  peFile.setFileName(strFile);
  if (bMode && peFile.open(QIODevice::ReadWrite))
  {
    bRet = true;
  }
  else if (!bMode && peFile.open(QIODevice::ReadOnly))
  {
    bRet = true;
  }

  // 获取文件名
  int nPos = strFile.lastIndexOf('/') + 1;
  if (nPos < 0)
  {
    nPos = 0;
  }
  peName = strFile.mid(nPos);
  initTreeView();
  // 将右侧界面切换到exe界面
  ui.stackedWidget->setCurrentIndex(tid_exe);
  return bRet;
}

void pe_analysis_tool::initTreeView()
{
  if (!peFile.isOpen())
  {
    return;
  }

  treeModel->clear();
  QStandardItem* itemPE = new QStandardItem(QIcon(":/img/exe.png") ,"File: " + peName);
  itemPE->setEditable(false);
  itemPE->setData(QVariant((int)tid_exe));
  treeModel->appendRow(itemPE);

  QStandardItem* itemDos = new QStandardItem(QIcon(":/img/file.png"), "Dos Header");
  itemDos->setEditable(false);
  itemDos->setData(QVariant((int)tid_dos));
  itemPE->appendRow(itemDos);

  QStandardItem* itemNt = new QStandardItem(QIcon(":/img/file.png"), "Nt Header");
  itemNt->setEditable(false);
  itemNt->setData(QVariant((int)tid_nt));
  itemPE->appendRow(itemNt);

  QStandardItem* itemFile = new QStandardItem(QIcon(":/img/file.png"), "File Header");
  itemFile->setEditable(false);
  itemFile->setData(QVariant((int)tid_file));
  itemNt->appendRow(itemFile);

  QStandardItem* itemOpt = new QStandardItem(QIcon(":/img/file.png"), "Optional Header");
  itemOpt->setEditable(false);
  itemOpt->setData(QVariant((int)tid_optional));
  itemNt->appendRow(itemOpt);

  QStandardItem* itemData = new QStandardItem(QIcon(":/img/file.png"), "Data Directiories [x]");
  itemData->setEditable(false);
  itemData->setData(QVariant((int)tid_data));
  itemOpt->appendRow(itemData);

  QStandardItem* itemSec = new QStandardItem(QIcon(":/img/file.png"), "Section Header [x]");
  itemSec->setEditable(false);
  itemSec->setData(QVariant((int)tid_section));
  itemPE->appendRow(itemSec);

  QStandardItem* itemImp = new QStandardItem(QIcon(":/img/folder.png"), "Import Diectory");
  itemImp->setEditable(false);
  itemImp->setData(QVariant((int)tid_import));
  itemPE->appendRow(itemImp);

  QStandardItem* itemRel = new QStandardItem(QIcon(":/img/folder.png"), "Relocation Diectory");
  itemRel->setEditable(false);
  itemRel->setData(QVariant((int)tid_relocation));
  itemPE->appendRow(itemRel);

  QStandardItem* itemDeb = new QStandardItem(QIcon(":/img/folder.png"), "Debug Diectory");
  itemDeb->setEditable(false);
  itemDeb->setData(QVariant((int)tid_debug));
  itemPE->appendRow(itemDeb);

  QStandardItem* itemAddr = new QStandardItem(QIcon(":/img/gear.png"), "Address Converter");
  itemAddr->setEditable(false);
  itemAddr->setData(QVariant((int)tid_address));
  itemPE->appendRow(itemAddr);

  QStandardItem* itemDep = new QStandardItem(QIcon(":/img/gear.png"), "Dependency Walker");
  itemDep->setEditable(false);
  itemDep->setData(QVariant((int)tid_dependency));
  itemPE->appendRow(itemDep);

  QStandardItem* itemHex = new QStandardItem(QIcon(":/img/gear.png"), "Hex Editor");
  itemHex->setEditable(false);
  itemHex->setData(QVariant((int)tid_hex));
  itemPE->appendRow(itemHex);

  QStandardItem* itemIde = new QStandardItem(QIcon(":/img/gear.png"), "Identifier");
  itemIde->setEditable(false);
  itemIde->setData(QVariant((int)tid_identifier));
  itemPE->appendRow(itemIde);

  QStandardItem* itemImpAddr = new QStandardItem(QIcon(":/img/gear.png"), "Import Addr");
  itemImpAddr->setEditable(false);
  itemImpAddr->setData(QVariant((int)tid_importadder));
  itemPE->appendRow(itemImpAddr);

  QStandardItem* itemQui = new QStandardItem(QIcon(":/img/gear.png"), "Quick Disassmembler");
  itemQui->setEditable(false);
  itemQui->setData(QVariant((int)tid_quick));
  itemPE->appendRow(itemQui);

  QStandardItem* itemReb = new QStandardItem(QIcon(":/img/gear.png"), "Rebuilder");
  itemReb->setEditable(false);
  itemReb->setData(QVariant((int)tid_rebuilder));
  itemPE->appendRow(itemReb);

  QStandardItem* itemRes = new QStandardItem(QIcon(":/img/gear.png"), "Resource Editor");
  itemRes->setEditable(false);
  itemRes->setData(QVariant((int)tid_resource));
  itemPE->appendRow(itemRes);

  QStandardItem* itemUpx = new QStandardItem(QIcon(":/img/gear2.png"), "UPX Utility");
  itemUpx->setEditable(false);
  itemUpx->setData(QVariant((int)tid_upx));
  itemPE->appendRow(itemUpx);

  // QVariant d = itemUpx->data();

  ui.treeView->expandAll();
}

void pe_analysis_tool::treeViewClicked(QModelIndex index)
{
  QVariant v = treeModel->itemData(index)[257];
  int nIndex = v.toInt();

  ui.stackedWidget->setCurrentIndex(nIndex);
}

void pe_analysis_tool::dragEnterEvent(QDragEnterEvent * event)
{
  // 在这里可以匹配拖动的文件类型
  // event->mimeData()->urls()[0].fileName().right(3).compare("jpg");
  // event->mimeData()->hasFormat("text/uri-list");
  // 接收拖拽
  event->acceptProposedAction();
  // 拒绝拖拽
  // event->ignore();
}

void pe_analysis_tool::dropEvent(QDropEvent * event)
{
  QList<QUrl> urls = event->mimeData()->urls();
  if (urls.isEmpty())
  {
    return;
  }
  QString fileName = urls.first().toLocalFile();
  if (fileName.isEmpty())
  {
    return;
  }
  openFile(fileName);
}
