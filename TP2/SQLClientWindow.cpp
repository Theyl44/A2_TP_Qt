    //
    // Created by Théo on 2/17/2020.
    //

#include "SQLClientWindow.h"
SQLClientWindow :: SQLClientWindow(QMainWindow* fenetre)
:QMainWindow(fenetre)
{
    this->setWindowTitle("SQL Client");
    this->setMinimumSize(600,400);

    QWidget* parent = new QWidget(this);
    parent->setMinimumSize(600,400);

    QVBoxLayout* vertical = new QVBoxLayout;
    parent->setLayout(vertical);

    this->notificationPanel =  new QTextEdit("configure");
    ButtonsPanel* buttonsPanel = new ButtonsPanel();
    this->resultTable = new QTableWidget();

    resultTable->setToolTip("Table");
    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    resultTable->setRowCount(5);
    resultTable->setColumnCount(3);

    vertical->addWidget(buttonsPanel);
    vertical->addWidget(notificationPanel);
    vertical->addWidget(resultTable);

    ConfigurationDialog* window2 = new ConfigurationDialog;
    window2->show();

}