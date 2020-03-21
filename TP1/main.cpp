#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QWidget>
#include "Window.h"

int main(int argc, char **argv) {
//    EXO1
    QApplication app(argc, argv); // mon objet application
    QPushButton button; // mon objet fenêtre
    QFont font("Courier", 16);
    button.setFont(font);
    button.setText("Hello World !");
    button.setToolTip("XOXO World !");
    button.show(); // affichage
    return app.exec(); // boucle

    //EXO2
//    QApplication app(argc, argv); // mon objet application
//    QPushButton button1("parent"); // mon objet fenêtre
//    QPushButton button2("fils", &button1);
//
//
//    button1.show(); // affichage
////    button2.show();
//    return app.exec(); // boucle

    //EXO3
//    QApplication app(argc, argv); // mon objet application
//    QWidget widget;
//    widget.setFixedSize(100,100);
//    QPushButton son("Fils" , &widget);
//    son.setGeometry(10,10,80,30);
//    widget.show();
//    return app.exec(); // boucle

    //EXO4
//    QApplication app(argc, argv); // mon objet application
//    QWidget widget;
//    Window* parent = new Window(&widget);
//
//    widget.show();
//    return app.exec(); // boucle
}