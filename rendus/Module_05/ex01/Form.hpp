#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
    const std::string _name;
    bool _signed;
    const int _sGrade;
    const int _eGrade;
    Form();

    public:
    Form(std::string name, int sGrade, int eGrade); //signed tjrs a 0 lors de l'init
    ~Form();
    Form(const Form &tocopy);
    Form &operator=(Form const &tocopy);

    class GradeTooHighException: public std::exception
    {
        public:
            virtual char const *what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
            virtual char const *what() const throw();
    };

    class FormAlreadySignedException: public std::exception
    {
        public:
            virtual char const *what() const throw();
    };

    const std::string &getName() const;
    int getSGrade() const;
    int getEGrade() const;
    bool isSigned() const;

    void beSigned(Bureaucrat const &b);
};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif
