//
// Created by david on 18.05.2022.
//

#include <fstream>
#include "Tests.h"
#include "Repo.h"
#include "Service.h"
#include <cassert>

void Tests::serviceTests() {
    Repo r{"tasks.txt"};
    int d = 0;
    for(auto& t : r.getAll()){
        if(t.getPriority() == 1){
            d += t.getDuration();
        }
    }
    Service s{r};
    int dd = s.getWPriority(1);
    assert(dd == d);
}

void Tests::repoTests() {
    Repo r{"tasks.txt"};
    assert(r.getAll().size() == 10);
}

void Tests::initFiles() {
    std::ofstream aff("tasks.txt");
    for(int i = 0; i< 10; i++){
        aff<<i<<","<<i<<","<<i%2<<",\n";
    }
    aff.close();
}

void Tests::runAll() {
    initFiles();
    repoTests();
    serviceTests();
}
