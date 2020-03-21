#include <QApplication>
#include <QPushButton>
#include "exo1.h"
#include "exo2.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    exo1* fenetre = new exo1();
    exo2* fenetre = new exo2();
    fenetre->show();


    return app.exec();
}