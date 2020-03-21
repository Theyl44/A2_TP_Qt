//
// Created by Théo on 3/18/2020.
//

#include "exo2.h"
#include "exo1.h"

exo2::exo2(QMainWindow *fenetre) {
    QWidget* parent = new QWidget(this);
    this->setCentralWidget(parent);
    this->setWindowTitle("IHM");
    this->setMinimumSize(300,200);

    QVBoxLayout* vbox = new QVBoxLayout(parent);

    vbox->addWidget(button);
    vbox->addWidget(text);

    button->setText("Fils");

//    connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(button, SIGNAL(clicked()), this, SLOT(changeButton()));
}

void exo2::changeButton() {
    this->button->setText("Example");
    this->button->setToolTip("Oui");

    value++;

    QString texte = this->text->toPlainText() +"Example"+ QString::number(value) + "\n";
    this->text->clear();
    this->text->setText(texte);

//    int i = value;
//    while (value > 0)
//    {
//        exo1 *fenetre1=new exo1;
//        fenetre1->show();
//        value--;
//    }
//    value = i ;
}


