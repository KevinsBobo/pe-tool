#ifdef QT_NO_DEBUG
#include <QtPlugin>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#endif

#include "pe_analysis_tool.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSlider>
#include <QtWidgets/QHBoxLayout>
#include <QTableWidget>
#include "find_dlg.h"

QApplication* pApp = NULL;

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  pApp = &a;


  // QTableWidget *rootWidget = new QTableWidget();
  // rootWidget->setColumnCount(2);
  // rootWidget->setRowCount(1);
  // rootWidget->horizontalHeader()->setStretchLastSection(true);
  // rootWidget->verticalHeader()->setVisible(false);
  // rootWidget->setHorizontalHeaderLabels(QStringList() << QString::fromLocal8Bit("HHH")
  // << "test");

  // QTableWidget *widget1 = new QTableWidget;
  // widget1->setColumnCount(1);
  // widget1->setRowCount(0);
  // // widget1->verticalHeader()->setStretchLastSection(true);
  // widget1->horizontalHeader()->setVisible(true);
  // widget1->verticalHeader()->setVisible(false);
  // widget1->setHorizontalHeaderLabels(QStringList() << QString::fromLocal8Bit("结果"));
  // rootWidget->setCellWidget(0,0,widget1);

  // rootWidget->show();

  // QLabel *label = new QLabel("<h2><font color='red'>Hello</font>, world!<h2>");
  // label->show();
  // QPushButton* btn = new QPushButton("Quit");
  // btn->show();

  pe_analysis_tool w;
  w.show();

  // 老语法，SIGNAL和SLOT里面的内容实质上是作为字符串处理的
  // QObject::connect(btn, SIGNAL(clicked()), &a, SLOT(quit()));
  // 新语法，直接绑定了函数指针
  // QObject::connect(btn, &QPushButton::clicked, &a, &QApplication::quit);
  // QObject::connect(btn, &QPushButton::clicked, &w, &pe_analysis_tool::close);

  // QWidget* window = new QWidget;
  // window->setWindowTitle("Enter your age");

  // QSpinBox* spinBox = new QSpinBox;
  // QSlider*  slider  = new QSlider(Qt::Horizontal);
  // spinBox->setRange(0, 130);
  // slider->setRange(0, 130);

  // QObject::connect(slider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
  // QObject::connect(spinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), slider, &QSlider::setValue);
  // // QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
  // slider->setValue(35);

  // QHBoxLayout* layout = new QHBoxLayout;
  // layout->addWidget(spinBox);
  // layout->addWidget(slider);
  // window->setLayout(layout);

  // window->show();

  // FindDialog* findDlg = new FindDialog;
  // findDlg->show();
  

  return a.exec();
}
