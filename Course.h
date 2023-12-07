// Course.h
#pragma once
#include <string>

class Course {
private:
    std::string title;
    int code;

public:
    Course(std::string title, int code);
    std::string getTitle() const;
    int getCode() const;
};
