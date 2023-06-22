#ifndef C___SUBJECTS_HPP
#define C___SUBJECTS_HPP
#include <iostream>
#include <string>
class Subject{
private:
    std::string code;
    std::string course;
    int  credits;
    std::string schedule;
public:
    Subject();
    Subject(const Subject&);

    //getters
    std::string getCode() const;
    std::string getCourse() const;
    int getCredits() const;
    std::string getSchedule() const;

    std::string toString() const;
    //setters
    void setCode(const std::string&);
    void setCourse(const std::string&);
    void setCredits(const int&);
    void setSchedule(const std::string&);

    //operadores relacionales

    Subject& operator = (const Subject&);

    bool operator ==(const Subject&) const;
    bool operator < (const Subject&) const;
    bool operator <= (const Subject&) const;
    bool operator > (const Subject&) const;
    bool operator >= (const Subject&) const;

    friend std::ostream& operator << (std::ostream&,Subject&);
    friend std::istream& operator >> (std::istream&,Subject&);
};
#endif //C___SUBJECTS_HPP
