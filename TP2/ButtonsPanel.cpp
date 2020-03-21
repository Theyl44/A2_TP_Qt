//
// Created by Théo on 2/17/2020.
//

#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel(QWidget* parent) {
    this->b1 = new QPushButton("Configure", this);
    this->b2 = new QPushButton("Connect", this );
    this->b3 = new QPushButton("Disconnect", this);

    b1->setMinimumSize(100,30);
    b2->setMinimumSize(100,30);
    b3->setMinimumSize(100,30);

    QHBoxLayout* horizontal = new QHBoxLayout();

    horizontal->addWidget(b1);
    horizontal->addWidget(b2);
    horizontal->addWidget(b3);

    this->setLayout(horizontal);




}
