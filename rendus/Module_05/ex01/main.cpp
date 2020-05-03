#include "Bureaucrat.hpp"

int main()
{
    std::cout << "Gigi" << std::endl;
    try {
        Bureaucrat b1("Gigi", 150);
        Form f1("*War Declaration*", 150, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;

	std::cout << "Gigi signs twice" << std::endl;
    try {
        Bureaucrat b1("Gigi", 150);
        Form f1("*War Declaration*", 150, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
		b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;

    std::cout << "Gégé" << std::endl;
    try {
        Bureaucrat b1("Gégé", 140);
        Form f1("*2000 euros for everyone!*", 1, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;

	std::cout << "Gégé signs a counterfeit form" << std::endl;
    try {
        Bureaucrat b1("Gégé", 140);
        Form f1("*2000 euros for everyone!*", 151, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;

    std::cout << "Juju" << std::endl;
    try {
        Bureaucrat b1("Juju", 160);
        Form f1("*2000 euros for everone!*", 1, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}