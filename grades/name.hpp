#ifndef C_NAME_HPP
#define C_NAME_HPP
#include <iostream>
#include <string>

class Name{
private:
    //Atributos
    std::string firstname;
    std::string lastname;
public:
    //constructores
    Name(){};
    Name(const Name&); //Constructor copia
    //getters
    std::string getFirstname() const;
    std::string getLastname() const;
    //toString
    std::string toString() const;
    //setters
    void setFirst( const std::string&);
    void setLast(const std::string&);
    //operador asignacion
    Name& operator = (const Name&);

    //operadores relacionales
    bool operator == (const Name&) const;
    bool operator != (const Name&) const;
    bool operator < (const Name&) const;
    bool operator <= (const Name&) const;
    bool operator > (const Name&) const;
    bool operator >= (const Name&) const;
    //Funciones friend

    friend std::ostream& operator << (std::ostream&,Name&);
    friend std::istream& operator >> (std::istream&,Name&);



};
#endif //C_NAME_HPP
