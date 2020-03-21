//
// Created by Théo on 2/17/2020.
//

#ifndef TP2_SQLCLIENTWINDOW_H
#define TP2_SQLCLIENTWINDOW_H


#include <QtWidgets>
#include <QMainWindow>
#include <QVBoxLayout>
#include "ButtonsPanel.h"
#include <QTextEdit>
#include <QTableWidget>
#include "ConfigurationDialog.h"
class SQLClientWindow : public QMainWindow{
    Q_OBJECT;
private:
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;
public :
    SQLClientWindow(QMainWindow* fenetre = 0);
    virtual ~SQLClientWindow(){};


};


#endif //TP2_SQLCLIENTWINDOW_H
