//
// Created by Théo on 2/17/2020.
//

#ifndef TP2_BUTTONSPANEL_H
#define TP2_BUTTONSPANEL_H

#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QHBoxLayout>

class ButtonsPanel : public QWidget {
    Q_OBJECT;
private:
    QPushButton* b1;
    QPushButton* b2;
    QPushButton* b3;

public:
    ButtonsPanel(QWidget* parent=0);
};


#endif //TP2_BUTTONSPANEL_H
