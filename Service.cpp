//
// Created by david on 18.05.2022.
//

#include "Service.h"
#include <bits/stdc++.h>
Service::Service(Repo &repo) : repo(repo) {}



vector<Task> &Service::getAll() {
    sort(repo.getAll().begin(), repo.getAll().end(), compare);
    return repo.getAll();
}

 bool Service::compare(Task &a, Task &b) {
    return a.getPriority() > b.getPriority();
}

int Service::getWPriority(int p) {
    int result = 0;
    for(auto& t : repo.getAll()){
        if(t.getPriority() == p)
            result += t.getDuration();
    }
    return result;
}
