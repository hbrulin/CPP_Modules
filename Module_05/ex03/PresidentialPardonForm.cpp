
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("PresidentialPardon", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other), target(other.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}