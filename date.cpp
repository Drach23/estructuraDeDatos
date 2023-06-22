#include "date.hpp"

using namespace std;

//creacion del toInt()
int Date::toInt() const {
    return day + month * 100 + year * 10000;
}
//cosntructor
Date::Date() { }

//constructor copia
Date::Date(const Date& d) : day(d.day),month(d.month),year(d.year){ }

//operador de igualacion
Date& Date::operator=(const Date& d){
    day = d.day;
    month = d.month;
    year = d.year;
    return *this;
}

//getters
int Date :: getYear() const{
    return year;
}
int Date :: getMonth() const{
    return month;
}
int Date :: getDay() const{
    return day;
}

//funcion toString()
string Date :: toString() const{
    return to_string(day)+ "/" + to_string(month) + "/" + to_string(year);
}

//setters
void Date :: setYear(const int& y){
    year = y;
}

void Date :: setMonth(const int& m) {
    month = m;
}

void Date :: setDay(const int& d){
    day = d;
}

//operadores relacionales
bool Date::operator == (const Date& d) const{
    return toInt() == d.toInt();
}

bool Date::operator != (const Date& d) const{
    return toInt() == d.toInt();
}
bool Date::operator<(const Date& d) const {
    return toInt() < d.toInt();
}
bool Date::operator <= (const Date& d) const{
    return toInt() <= d.toInt();
}
bool Date::operator > (const Date & d) const {
    return toInt() > d.toInt();
}
bool Date::operator >= (const Date& d) const {
    return toInt() >= d.toInt();
}

ostream& operator << (ostream& os, Date& d){
    string mystr;
    os << d.year <<endl;
    os << d.month << endl;
    os << d.day << endl;

    return os;
}
istream& operator >> (istream& is, Date& d){
    string mystr;
    getline(is, mystr,'/');
    d.year = stoi(mystr);
    getline(is, mystr,'/');
    d.month = stoi(mystr);
    getline(is, mystr,'/');
    d.day = stoi(mystr);
    return is;
}