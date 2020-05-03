#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("RobotomyRequest", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): Form(other), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
	std::cout << " BRRRZRRZRZRRZ "  << std::endl;
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully!"
            << std::endl;
    else
        std::cout << target << " was unfortunately not robotomized."
            << std::endl;
}