#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern jeremy;
    Form *f;

    f = jeremy.makeForm("shrubbery creation", "Bender");
    delete f;
    f = jeremy.makeForm("robotomy request", "Bender");
    delete f;
    f = jeremy.makeForm("presidential pardon", "Bender");
    delete f;
    f = jeremy.makeForm("plouf", "Bender");
    delete f;
}