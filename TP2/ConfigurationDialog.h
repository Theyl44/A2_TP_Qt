
#ifndef TP2_CONFIGURATIONDIALOG_H
#define TP2_CONFIGURATIONDIALOG_H


#include <QDialog>
#include <QVBoxLayout>
#include "LabeledTextField.h"


class ConfigurationDialog : public QDialog{
    Q_OBJECT;
public:
    ConfigurationDialog(QDialog* parent = 0);

};


#endif //TP2_CONFIGURATIONDIALOG_H
