//
// Created by Théo on 2/13/2020.
//

#include "Window.h"

Window::Window(QWidget *parent)
        : QWidget(parent)
{
    this->button = new QPushButton("BONJOUR", this);
    this->setWindowTitle("exo 4 ");
    this->setFixedSize(100,50);
    this->button->setGeometry(10,10,80,30);
}
