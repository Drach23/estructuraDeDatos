#ifndef C_TEACHER_HPP
#define C_TEACHER_HPP
#include <iostream>
#include <string>

#include "name.hpp"
#include "date.hpp"
#include "subjects.hpp"

class Teacher{
private:
    std::string code;
    Name name;
    Date birthday;
    Subject subject;
    std::string department;
public:
    Teacher();
    Teacher(const Teacher&);

    //getters
    std::string getCode() const;
    Name getName()const;
    Date getBirthday()const;
    std::string getSubject()const;
    std::string getDepartment() const;

    //toString
    std::string toString() const;

    //setters
    void setCode(const std::string &);
    void setName(const Name&);
    void setBirthday(const Date&);
    void setSubject(const Subject&);
    void setDepartment(const std::string &);

    //operadores relacionales
    Teacher& operator = (const Teacher &);

    bool operator < (const Teacher &);
    bool operator <= (const Teacher &);
    bool operator > (const Teacher &);
    bool operator >= (const Teacher &);

    friend std::ostream& operator << (std::ostream &, Teacher &);
    friend std::istream& operator >> (std::istream &, Teacher &);



};
#endif //C_TEACHER_HPP
