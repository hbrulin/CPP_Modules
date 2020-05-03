#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern &c) {
    (void)c;
}

Intern &Intern::operator=(const Intern &c) {
    (void)c;
    return *this;
}

Form *Intern::createPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

const Intern::forms Intern::ftab[3] = {
    { .name = "presidential pardon", .fn = &Intern::createPresidentialPardonForm },
    { .name = "robotomy request", .fn = &Intern::createRobotomyRequestForm },
    { .name = "shrubbery creation", .fn = &Intern::createShrubberyCreationForm },
};

Form *Intern::makeForm(std::string name, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (ftab[i].name == name)
        {
            std::cout << "Intern creates a " << name << " form!" << std::endl;
            return ftab[i].fn(target);
        }
    }
    std::cout << "Intern doesn't know that form." << std::endl;
    return NULL;
}