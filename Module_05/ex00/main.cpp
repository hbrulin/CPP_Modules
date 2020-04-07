#include "Bureaucrat.hpp"

int main()
{
    std::cout << "Gigi et Gégé" << std::endl;
    try
    {
        Bureaucrat b1("Gigi", 1);
        Bureaucrat b2("Gégé", 150);
        b1.decrementGrade();
        b2.incrementGrade();
        std::cout << "Success: " << b1 << "; " << b2 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Jojo" << std::endl;
    try
    {
        Bureaucrat b1("Jojo", 0);
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Jacques" << std::endl;
    try
    {
        Bureaucrat b1("Jacques", 151);
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Juju" << std::endl;
    try
    {
        Bureaucrat b1("Juju", 2);
        b1.incrementGrade();
        b1.decrementGrade();
        b1.incrementGrade();
        b1.incrementGrade();
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Toto" << std::endl;
    try
    {
        Bureaucrat b1("Toto", 150);
        b1.decrementGrade();
        std::cout << "Success: " << b1 << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}