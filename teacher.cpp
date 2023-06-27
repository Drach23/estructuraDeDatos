#include "teacher.hpp"


using namespace std;
//constructores
Teacher::Teacher(){}
Teacher::Teacher(const Teacher & t) : code(t.code),name(t.name),birthday(t.birthday),course(t.course),department(t.department) {}
//operador de asignacion
Teacher& Teacher::operator=(const Teacher &t) {
    code = t.code;
    name = t.name;
    birthday = t.birthday;
    course = t.course;
    department = t.department;
    return *this;
}
//getter
string Teacher::getCode() const {
    return code;
}
Name Teacher::getName() const {
    return name;
}
Date Teacher::getBirthday() const {
    return birthday;
}
Subject Teacher::getCourse() const {
    return course;
}
string Teacher::getDepartment() const {
    return department;
}
//toString
string Teacher::toString() const {
    string result;
    result += code;
    result += "|";
    result += name.toString();
    result += "|";
    result += birthday.toString();
    result += "|";
    result += course.toString();
    result += "|";
    result += department;
    return result;
}
//setter
void Teacher::setCode(const std::string &c) {
    code = c;
}
void Teacher::setName(const Name &n) {
    name = n;
}
void Teacher::setBirthday(const Date &b) {
    birthday = b;
}
void Teacher::setCourse(const Subject &c) {
    course = c;
}
void Teacher::setDepartment(const std::string &d) {
    department = d;
}
//operadores relacionales
bool Teacher::operator ==(const Teacher&t){
    return code == t.toString();
}
bool Teacher::operator!=(const Teacher &t) {
    return code != t.toString();
}
bool Teacher::operator < (const Teacher &t){
    return code <= t.toString();
}
bool Teacher::operator <= (const Teacher&t){
    return code > t.toString();
}
bool Teacher::operator >= (const Teacher&t){
    return code >= t.toString();
}

ostream& operator << (ostream& os,Teacher&t){
    os<<t.code<<endl;
    os<<t.name<<endl;
    os<<t.birthday<<endl;
    os<<t.course<<endl;
    os<<t.department<<endl;

    return os;
}

istream& operator >> (istream& is, Teacher& t){
    string myStr;
    getline(is,t.code);
    is>>t.name;
    is>>t.birthday;
    is>>t.course;
    getline(is,t.department);

    return is;
}



