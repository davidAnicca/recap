//
// Created by david on 18.05.2022.
//

#ifndef PARTIAL_RECAP_3_SERVICE_H
#define PARTIAL_RECAP_3_SERVICE_H


#include "Repo.h"

class Service {
private:
    ///referinta la repo
    Repo& repo;
    ///compara doua elemente(pt sortare)
    static bool compare(Task& a, Task& b);
public:

    explicit Service(Repo &repo);
    ///returneaza lista sortata cu toate taskurile
    vector<Task>& getAll();
    ///returneaza suma duratiilor tuturor taskurilor cu o anumita prioritate p
    int getWPriority(int p);

};


#endif //PARTIAL_RECAP_3_SERVICE_H
