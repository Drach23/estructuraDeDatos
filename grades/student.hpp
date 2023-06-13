#ifndef C_STUDENT_HPP
#define C_STUDENT_HPP
#include <iostream>
#include <string>

#include "name.hpp"
#include "date.hpp"

class Student{
private:
    //Atributos
    std::string code;
    Name name;
    Date birthday;
    std::string career;
    Date startDate;
    float grade;
public:
    //constructores
    Student() = default;
    Student(const Student&); //constructor copia
    //getters
    std::string getcode() const;
    Name getName() const;
    Date getBirthday() const;
    std::string getCareer() const;
    Date getStartDate() const;
    float getGrade() const;
    //toString()
    std::string toString() const;
    //setters
    void setCode(const std::string&);
    void setName(const Name&);
    void setBirthday(const Date&);
    void setCareer(const std::string&);
    void setStartDate(const Date&);
    void setGrade(const float&);

    //operadores relaciones
    Student& operator = (const Student&);

    bool operator == (const Student&) const;
    bool operator != (const Student&) const;
    bool operator < (const Student&) const;
    bool operator <= (const Student&) const;
    bool operator > (const Student&) const;
    bool operator >= (const Student&) const;

    friend std::ostream& operator << (std::ostream&,Student&);
    friend std::istream& operator >> (std::istream&, Student&);
};
#endif //C_STUDENT_HPP
