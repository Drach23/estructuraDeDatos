#ifndef C_MENU_HPP
#define C_MENU_HPP
#include <iostream>
#include <string>
#include <vector>

#include "student.hpp"
#include "teacher.hpp"


class Menu{
public:
    //vectores para almacenar los datos de teacher
    std::vector<Student> students;
    std::vector<Teacher> teachers;
    Menu();
    void start();
    void addTeacher();
    void addStudent();
    void showStudents();
    void showTeachers();
};
#endif //C_MENU_HPP
