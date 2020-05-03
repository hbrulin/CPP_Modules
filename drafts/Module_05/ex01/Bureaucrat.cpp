#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "The grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "The grade is too low!";
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &tocopy) {
    *this = tocopy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &tocopy) {
    (std::string)_name = (std::string)tocopy._name;
    _grade = tocopy._grade;
    return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    return out << b.getName() << ", bureaucrat grade " << b.getGrade();
}

void Bureaucrat::signForm(Form &f) const
{
    try
    {
        f.beSigned(*this);
        std::cout << _name << " signs " << f.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot sign " << f.getName()
            << " because " << e.what() << std::endl;
    }
}