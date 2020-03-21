//
// Created by Théo on 3/18/2020.
//

#ifndef TP3_EXO2_H
#define TP3_EXO2_H

#include <QtWidgets>
#include <QObject>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTextEdit>

class exo2 : public QMainWindow {
    Q_OBJECT;
public:
    exo2(QMainWindow* fenetre = 0);
    int value=0;
    QPushButton* button = new QPushButton();
    QTextEdit* text = new QTextEdit();
public slots:
            void changeButton();

};


#endif //TP3_EXO2_H
