#include "Bureaucrat.hpp"

int main()
{
    std::cout << "Gigi" << std::endl;
    try {
        Bureaucrat b1("Gigi", 150);
        Form f1("Formulaire pour faire la guerre", 150, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Gégé" << std::endl;
    try {
        Bureaucrat b1("Gégé", 140);
        Form f1("2000 euros pour tout le monde", 1, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Juju" << std::endl;
    try {
        Bureaucrat b1("Juju", 160);
        Form f1("2000 euros pour tout le monde", 1, 5);
        std::cout << "A new form is available : " << f1 << std::endl;
        b1.signForm(f1);
    }
    catch (std::exception const &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}