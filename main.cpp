// main.cpp
#include "University.h"

int main() {
    Student student1("John Doe", 1);
    Student student2("Jane Smith", 2);

    Course course1("Introduction to C++", 101);
    Course course2("Advanced C++ Programming", 201);

    University university;

    university.addStudent(student1);
    university.addStudent(student2);

    university.addCourse(course1);
    university.addCourse(course2);

    university.enrollStudentInCourse(student1, course1);
    university.enrollStudentInCourse(student2, course2);

    university.displayEnrollments();

    return 0;
}
