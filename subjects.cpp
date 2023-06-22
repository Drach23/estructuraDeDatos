#include "subjects.hpp"

using namespace std;
Subject::Subject(){ }

Subject::Subject(const Subject& s) : code(s.code),course(s.course),credits(s.credits),schedule(s.schedule) {}

Subject& Subject::operator=(const Subject& s) {
    code = s.code;
    course = s.course;
    credits = s.credits;
    schedule = s.schedule;
    return *this;
}
//getters
string Subject::getCode() const {
    return code;
}
string Subject::getCourse() const {
    return course;
}
int Subject::getCredits() const {
    return credits;
}
string Subject::getSchedule() const {
    return schedule;
}

string Subject::toString() const {
    string result;
    result = code;
    result += "|";
    result += course;
    result += "|";
    result += credits;
    result += "|";
    result += schedule;

    return result;
}
 
//setters
void Subject::setCode(const std::string& c) {
    code = c;
}
void Subject::setCourse(const std::string& c) {
    course = c;
}
void Subject::setCredits(const int& c) {
    credits = c;
}
void Subject::setSchedule(const std::string& s) {
    schedule = s;
}
// operadores relacionales:
bool Subject::operator<(const Subject &s) const {
    return code < s.code;
}
bool Subject::operator<=(const Subject &s) const {
    return code <= s.code;
}
bool Subject::operator>(const Subject &s) const {
    return code > s.code;
}

bool Subject::operator>=(const Subject& s) const{
    return code >= s.code;
}

ostream& operator << (ostream& os,const Subject& s){
    os<<s.getCode()<<endl;
    os<<s.getCourse()<<endl;
    os<<s.getCredits()<<endl;
    os<<s.getSchedule()<<endl;
    return os;
}

istream& operator >> (istream& is, Subject& s){
    string myStr;
    getline(is,s.code);
    getline(is,s.course);
    is>>s.credits;
    is>>s.schedule;
    return is;
}