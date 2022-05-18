//
// Created by david on 18.05.2022.
//

#ifndef PARTIAL_RECAP_3_REPO_H
#define PARTIAL_RECAP_3_REPO_H
#include <vector>
using std::vector;
#include <string>
#include "Task.h"

using std::string;

class Repo {
private:
    //path spre fisierul de import
    string filePath;
    vector<Task> all;
public:
    //construcor
    Repo(string filePath);
    //returneaza un vector cu toate taskurile
    vector<Task>& getAll();
    ///incarca date din fisier
    void loadFromFile();
    void saveInFile();
};


#endif //PARTIAL_RECAP_3_REPO_H
