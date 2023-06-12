#include "name.hpp"

using namespace std;
//constructores
Name::Name(){ };

Name::Name(const Name& n) : lastname(n.lastname), firstname(n.firstname){}

Name& Name:: operator = (const Name& n){
    firstname = n.firstname;
    lastname = n.lastname;

    return *this;
}
//getters
string Name::getFirstname() const {
    return firstname;
}
string Name::getLastname() const {
    return lastname;
}
//toString
string Name::toString () const{
    return lastname + " " + firstname;
};
//setters
void Name::setFirst(const std::string& f) {
    firstname = f;
}
void Name::setLast(const std::string& l) {
    lastname = l;
}

bool Name::operator == (const Name& n) const{
    return toString() == n.toString();
}
bool Name::operator != (const Name& n) const{
    return toString() != n.toString();
}
bool Name::operator < (const Name& n) const{
    return toString() < n.toString();
}
bool Name::operator <= (const Name& n) const{
    return toString() <= n.toString();
}
bool Name::operator > (const Name& n) const{
    return toString() > n.toString();
}
bool Name::operator>=(const Name& n) const {
    return toString() >= n.toString();
}

ostream& operator << (ostream& os,Name& n){
    os << n.lastname << " " <<n.firstname;
    return os;
}
istream& operator >> (istream& is, Name& n){
    getline(is,n.lastname, ' ');
    getline(is,n.firstname);
}
