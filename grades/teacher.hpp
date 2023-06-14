#ifndef C_TEACHER_HPP
#define C_TEACHER_HPP
#include <iostream>
#include <string>

#include "name.hpp"
#include "date.hpp"

class Teacher{
private:
    std::string code;
    Name name;
    Date birthday;
    std::string subject;
    std::string department;
public:
    Teacher();
    Teacher(const Teacher&);

    //getters



};
#endif //C_TEACHER_HPP
