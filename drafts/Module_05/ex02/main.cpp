#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    std::cout << "All okay" << std::endl;
    try {
        Bureaucrat b1("Gigi", 1);
        Bureaucrat b2("Gégé", 1);
        ShrubberyCreationForm f1("Park");
        PresidentialPardonForm f2("Juju");
        RobotomyRequestForm f3("Jojo");
        
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Unsigned" << std::endl;
    try {
        Bureaucrat b1("Gigi", 1);
        Bureaucrat b2("Gégé", 1);
        ShrubberyCreationForm f1("Park");
        PresidentialPardonForm f2("Juju");
        RobotomyRequestForm f3("Jojo");

        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
        
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Grade too low" << std::endl;
    try {
        Bureaucrat b1("Gigi", 1);
        Bureaucrat b2("Gégé", 150);
        ShrubberyCreationForm f1("Park");
        PresidentialPardonForm f2("Juju");
        RobotomyRequestForm f3("Jojo");

        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}