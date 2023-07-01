
#ifndef GRADES_EXCEPTIONS_HPP
#define GRADES_EXCEPTIONS_HPP
#include <exception>
#include <string>
class ExceptionGrade : public std::exception{
private:
    std::string msg;
public:
    explicit ExceptionGrade(const char* message) : msg(message){ }
    explicit ExceptionGrade(const std::string& message) :msg(message){ }
    virtual ~ExceptionGrade() throw() { }
    virtual const char* what() const throw(){
        return msg.c_str();
    }
};
#endif //GRADES_EXCEPTIONS_HPP
