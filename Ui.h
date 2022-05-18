//
// Created by david on 18.05.2022.
//

#ifndef PARTIAL_RECAP_3_UI_H
#define PARTIAL_RECAP_3_UI_H
#include <QWidget>
#include <QtWidgets>
#include "Service.h"


class Ui : public QWidget{
private:
    Service& srv;
    ///initializeaza componentele
    void init();
    ///conecteaza componentele
    void conec();
    ///reface lista de elemente
    void reload(const vector<Task> all);
///layout principal
    QHBoxLayout* mainL = new QHBoxLayout;
///widget de lista de taskuri
    QListWidget* list = new QListWidget;
/*layout din dreapta{
    input de text
    buton
    label
*/
    QVBoxLayout* dreaptaL = new QVBoxLayout;
  ///widget din dreapta
    QWidget* dreaptaW = new QWidget;
    ///input in dreapta
    QLineEdit* input = new QLineEdit;
    ///butonul de calcul
    QPushButton* showBtn = new QPushButton("afiseaza");
    ///suma duratiilor
    QLabel* duration = new QLabel("0");

public:
    Ui(Service& srv):srv(srv){
        init();
        conec();
        reload(srv.getAll());
    };

};


#endif //PARTIAL_RECAP_3_UI_H
