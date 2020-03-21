//
// Created by Théo on 3/18/2020.
//

#include "exo1.h"

exo1::exo1(QMainWindow *fenetre)
        :QMainWindow(fenetre)
{
    QWidget* parent = new QWidget(this);
    this->setCentralWidget(parent);
    this->setWindowTitle("IHM");
    this->setMinimumSize(600,400);
    QVBoxLayout* vbox = new QVBoxLayout(parent);

    QProgressBar* progressBar = new QProgressBar;
    QSlider* slider = new QSlider(Qt::Horizontal);

    vbox->addWidget(progressBar);
    vbox->addWidget(slider);

    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

}
