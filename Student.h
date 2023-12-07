// Student.h
#pragma once
#include <string>

class Student {
private:
    std::string name;
    int id;

public:
    Student(std::string name, int id);
    std::string getName() const;
    int getID() const;
};
