#ifndef C_DATE_HPP
#define C_DATE_HPP

#include <iostream>
#include <string>


class Date{
private:
    int year;
    int month;
    int day;

    int toInt() const;
public:
    Date(); //constructor
    Date (const Date&); //constructor copia

    //getters
    int getYear() const;
    int getMonth() const;
    int getDay() const;

    std::string toString() const;

    //setters
    void setYear(const int&);
    void setMonth(const int&);
    void setDay(const int&);

    //Operadores relacionales
    bool operator == (const Date&) const;
    bool operator != (const Date&) const;
    bool operator <  (const Date&) const;
    bool operator <= (const Date&) const;
    bool operator >  (const Date&) const;
    bool operator >= (const Date&) const;

    //operador de igualdad para igualar objetos
    Date& operator = (const Date&);

    //funciones friend para poder asignar con cin e imprimir con cout.
    friend std::ostream& operator << (std::ostream&,Date&);
    friend std::istream& operator >> (std::istream&,Date&);
};
#endif //C_DATE_HPP
