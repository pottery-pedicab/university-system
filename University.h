// University.h
#pragma once
#include <vector>
#include "Student.h"
#include "Course.h"

class University {
private:
    std::vector<Student> students;
    std::vector<Course> courses;

public:
    void addStudent(const Student& student);
    void addCourse(const Course& course);
    void enrollStudentInCourse(const Student& student, const Course& course);
    void displayEnrollments() const;
};
