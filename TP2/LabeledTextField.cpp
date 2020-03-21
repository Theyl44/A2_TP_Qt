//
// Created by Théo on 2/17/2020.
//

#include "LabeledTextField.h"
#include <QWidget>

LabeledTextField::LabeledTextField(char* name, QWidget *fenetre)
        : QWidget(fenetre)
{
    QWidget* parent = new QWidget(this);
    QHBoxLayout* horizontal = new QHBoxLayout();
    parent->setLayout(horizontal);

    this->qTextEdit = new QTextEdit();
    this->qLabel = new QLabel(name);
    qTextEdit->setMaximumHeight(25);

    horizontal->addWidget(qLabel);
    horizontal->addWidget(qTextEdit);
}
