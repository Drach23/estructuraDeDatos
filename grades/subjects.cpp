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
 //TODO: HACER LA FUNCION TO STRING PARA PODER IMPRIMIR SUBJECTS
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
