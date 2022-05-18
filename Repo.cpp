//
// Created by david on 18.05.2022.
//

#include <fstream>
#include <sstream>
#include <utility>
#include "Repo.h"

Repo::Repo(string filePath) : filePath(std::move(filePath)) {loadFromFile();}

vector<Task> &Repo::getAll() {
    return all;
}

void Repo::loadFromFile() {
    all.clear();
    std::ifstream fin(filePath);
    string line;
    while(fin>>line){
        std::stringstream ss;
        ss<<line;
        vector<string>parts;
        string buf;
        while(std::getline(ss, buf, ',')){
            parts.push_back(buf);
        }
        Task t{parts[0], std::stoi(parts[1]), std::stoi(parts[2])};
        all.push_back(t);
    }
    fin.close();
}

void Repo::saveInFile() {

}
