#include <QtWidgets>
#include "find_dlg.h"

FindDialog::FindDialog(QWidget* parent /* = 0 */)
  : QDialog(parent)
{
  label = new QLabel(tr("Find &what:"));
  lineEdit = new QLineEdit;
  label->setBuddy(lineEdit);

  caseCheckBox = new QCheckBox(tr("Match &case"));
  backwardCheckBox = new QCheckBox(tr("Search &backford"));

  findButton = new QPushButton(tr("&Find"));
  findButton->setDefault(true);
  findButton->setEnabled(false);

  closeButton = new QPushButton(tr("Close"));
  
  connect(lineEdit, &QLineEdit::textChanged, this, &FindDialog::enableFindButton);
  connect(findButton, &QPushButton::clicked, this, &FindDialog::findClicked);
  connect(closeButton, &QPushButton::clicked, this, &FindDialog::close);

  QHBoxLayout* topLeftLayout = new QHBoxLayout;
  topLeftLayout->addWidget(label);
  topLeftLayout->addWidget(lineEdit);

  QVBoxLayout* leftLayout = new QVBoxLayout;
  leftLayout->addLayout(topLeftLayout);
  leftLayout->addWidget(caseCheckBox);
  leftLayout->addWidget(backwardCheckBox);

  QVBoxLayout* rightLayout = new QVBoxLayout;
  rightLayout->addWidget(findButton);
  rightLayout->addWidget(closeButton);
  rightLayout->addStretch();

  QHBoxLayout* mainLayout = new QHBoxLayout;
  mainLayout->addLayout(leftLayout);
  mainLayout->addLayout(rightLayout);
  setLayout(mainLayout);
  
  setWindowTitle(tr("Find"));
  setFixedHeight(sizeHint().height());
}

FindDialog::~FindDialog()
{

}

void FindDialog::findClicked()
{
  QString text = lineEdit->text();
  Qt::CaseSensitivity cs = caseCheckBox->isCheckable() ? Qt::CaseInsensitive : Qt::CaseSensitive;
  if (backwardCheckBox->isCheckable())
  {
    emit findPrevious(text, cs);
  }
  else
  {
    emit findNext(text, cs);
  }
}

void FindDialog::enableFindButton(const QString& text)
{
  findButton->setEnabled(!text.isEmpty());
}