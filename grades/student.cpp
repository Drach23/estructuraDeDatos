#include "student.hpp"

using namespace std;

Student::Student() { };

//se toman los valores del constructor de cada elemento (delegacion de constructores)
Student::Student(const Student& s) : code(s.code),name(s.name),birthday(s.birthday),career(s.career),startDate(s.startDate),grade(s.grade)  {}

Student& Student::operator = (const Student& s) {
    code = s.code;
    name = s.name;
    birthday = s.birthday;
    career = s.career;
    startDate = s.startDate;
    grade = s.grade;
    return *this;
}

//getter
string Student::getcode() const {
    return code;
}
Name Student :: getName() const{
    return name;
}
Date Student ::getBirthday() const {
    return birthday;
}
string Student :: getCareer() const {
    return career;
}
Date Student ::getStartDate() const {
    return startDate;
}
float Student :: getGrade() const {
    return grade;
}
//toString
string Student::toString() const {
    string result;
    result = code;
    result += "|";
    result += name.toString();
    result += "|";
    result += birthday.toString();
    result += "|";
    result += career;
    result += "|";
    result += startDate.toString();
    result += "|";
    result += to_string(grade);

    return result
}

//setters
void Student::setCode(const std::string & c) {
    code = c;
}
void Student::setName(const Name & n) {
    name = n;
}
void Student::setBirthday(const Date & b) {
    birthday = b;
}
void Student::setCareer(const std::string & c) {
    career = c;
}
void Student::setStartDate(const Date & s) {
    startDate = s;
}
void Student::setGrade(const float & g) {
    grade = g;
}

//operadores relacionales:
bool Student::operator ==(const Student&s) const{
    return code == s.toString();
}

bool Student::operator !=(const Student&s) const{
    return code != s.toString();
}

bool Student::operator<(const Student &s) const {
    return code < s.toString();
}
bool Student::operator<=(const Student& s) const{
    return code <= s.toString();
}

bool Student::operator > (const Student& s) const{
    return code > s.toString();
}
bool Student::operator >= (const Student& s) const{
    return code >= s.toString();
}


ostream& operator << (ostream& os, Student& s){
    char myGrade[7];
    sprintf(myGrade,"%0.2f",s.grade);

    os<<s.code<<endl;
    os<<s.name<<endl;
    os<<s.birthday<<endl;
    os<<s.career<<endl;
    os<<s.startDate<<endl;
    os<<myGrade;

    return os;
}

istream& operator >> (istream& is, Student& s){
    string myStr;
    getline(is,s.code);
    is>>s.name;
    is>>s.birthday;
    getline(is,s.career);
    is>>s.startDate;
    getline(is,myStr);
    s.grade = atof(myStr.c_str());
    
    return is;
}
