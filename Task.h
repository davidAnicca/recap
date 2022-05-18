//
// Created by david on 18.05.2022.
//

#ifndef PARTIAL_RECAP_3_TASK_H
#define PARTIAL_RECAP_3_TASK_H
#include <string>
using std::string;

class Task {

public:
    const string &getName() const;

    void setName(const string &name);

    int getDuration() const;

    void setDuration(int duration);

    int getPriority() const;

    void setPriority(int priority);

    bool operator==(const Task &rhs) const;

    bool operator!=(const Task &rhs) const;

private:
    int duration;
public:
    Task(string name, int duration, int priority);

private:
    int priority;
    string name;

};


#endif //PARTIAL_RECAP_3_TASK_H
