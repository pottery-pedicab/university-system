// Student.cpp
#include "Student.h"

Student::Student(std::string name, int id) : name(name), id(id) {}

std::string Student::getName() const {
    return name;
}

int Student::getID() const {
    return id;
}
