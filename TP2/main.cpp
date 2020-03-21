#include <QApplication>
#include <QPushButton>
#include "ConfigurationDialog.h"
#include "SQLClientWindow.h"
#include "LabeledTextField.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv); // mon objet application

    SQLClientWindow* window = new SQLClientWindow; // mon objet fenêtre
    window->show();

    return app.exec(); // boucle
}