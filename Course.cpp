// Course.cpp
#include "Course.h"

Course::Course(std::string title, int code) : title(title), code(code) {}

std::string Course::getTitle() const {
    return title;
}

int Course::getCode() const {
    return code;
}
