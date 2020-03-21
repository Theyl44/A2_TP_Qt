#include "ConfigurationDialog.h"

ConfigurationDialog::ConfigurationDialog(QDialog *parent) {
    this->setWindowTitle("Configuraton");
    this->setFixedSize(350,140);

    LabeledTextField* text1 = new LabeledTextField("IP Address : ",parent);

    LabeledTextField* text2 = new LabeledTextField("User", parent);

    LabeledTextField* text3 = new LabeledTextField("Password", parent);

    QVBoxLayout* vertical =new QVBoxLayout;

    vertical->addWidget(text1);
    vertical->addWidget(text2);
    vertical->addWidget(text3);

    this->setLayout(vertical);
}
