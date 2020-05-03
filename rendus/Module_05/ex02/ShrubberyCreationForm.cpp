
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

static std::string TREE =
    "    &%& \n"
    " ,&@%@%&@%,\n"
    ",%&@%&&@&&%\n"
    "%@&@&%@@%&&%\n"
    "%@&%@&%&%%&&\n"
    " @%&&@@&&% \n"   
    "    |@|   \n" 
    "    |@|  \n"
    "   / @ \\ \n";

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor); //estce que la suite va s'exécuter quand meme si exception caught?
    std::fstream out;
    out.open((target + "_shrubbery").c_str(), std::fstream::out);
    out << TREE;
    out.close();
}