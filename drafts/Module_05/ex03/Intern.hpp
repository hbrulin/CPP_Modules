#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
        static Form *createPresidentialPardonForm(std::string target);
        static Form *createRobotomyRequestForm(std::string target);
        static Form *createShrubberyCreationForm(std::string target);

        struct forms
        {
            std::string name;
            Form *(*fn)(std::string target); //ptr sur ft
        };
        static const forms ftab[3];

    public:
        Intern();
        ~Intern();
        Intern(const Intern &c);
        Intern &operator=(const Intern &c);

        Form *makeForm(std::string name, std::string target);
};


#endif