//
// Created by Théo on 2/13/2020.
//

#ifndef TP1_WINDOW_H
#define TP1_WINDOW_H

#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QWidget>

class Window :public QWidget{
Q_OBJECT;
public :
    Window(QWidget* parent=0);
private :
    QPushButton* button ;
};


#endif //TP1_WINDOW_H
