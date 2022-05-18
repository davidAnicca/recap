//
// Created by david on 18.05.2022.
//

#include "Task.h"

#include <utility>

const string &Task::getName() const {
    return name;
}

void Task::setName(const string &name) {
    Task::name = name;
}

int Task::getDuration() const {
    return duration;
}

void Task::setDuration(int duration) {
    Task::duration = duration;
}

int Task::getPriority() const {
    return priority;
}

void Task::setPriority(int priority) {
    Task::priority = priority;
}

Task::Task(string name, int duration, int priority) : duration(duration), priority(priority), name(std::move(name)) {}

bool Task::operator==(const Task &rhs) const {
    return name == rhs.name;
}

bool Task::operator!=(const Task &rhs) const {
    return !(rhs == *this);
}
