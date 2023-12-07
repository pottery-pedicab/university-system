// University.cpp
#include "University.h"
#include <iostream>

void University::addStudent(const Student& student) {
    students.push_back(student);
}

void University::addCourse(const Course& course) {
    courses.push_back(course);
}

void University::enrollStudentInCourse(const Student& student, const Course& course) {
    // Simulating enrollment logic
    std::cout << student.getName() << " enrolled in " << course.getTitle() << std::endl;
}

void University::displayEnrollments() const {
    // Displaying enrollments (simulated)
    std::cout << "Enrollments:" << std::endl;
    for (const Student& student : students) {
        for (const Course& course : courses) {
            std::cout << student.getName() << " is enrolled in " << course.getTitle() << std::endl;
        }
    }
}
