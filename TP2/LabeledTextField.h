//
// Created by Théo on 2/17/2020.
//

#ifndef TP2_LABELEDTEXTFIELD_H
#define TP2_LABELEDTEXTFIELD_H

#include <QtWidgets/QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QHBoxLayout>

class LabeledTextField : public QWidget{
    Q_OBJECT;
private:
    QLabel* qLabel;
    QTextEdit* qTextEdit;

public:
    LabeledTextField(char* name, QWidget* fenetre = 0);
};


#endif //TP2_LABELEDTEXTFIELD_H
