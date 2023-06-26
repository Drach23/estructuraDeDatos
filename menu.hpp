#ifndef C_MENU_HPP
#define C_MENU_HPP
#include <iostream>
#include <string>

#include "student.hpp"
#include "teacher.hpp"


class Menu{
protected:
    Student students[10];
    Teacher teachers[10];
    int numStudents = 0;
    int numTeachers = 0;
public:
    Menu();
    void start();
    void addTeacher();
    void addStudent();
    void showStudents();
    void showTeachers();
};
#endif //C_MENU_HPP
