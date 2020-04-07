#include "Form.hpp"

Form::Form() : _name(NULL), _signed(false), _sGrade(0), _eGrade(0) {
}

Form::Form(std::string name, int sGrade, int eGrade) : _name(name), _signed(false), _sGrade(sGrade), _eGrade(eGrade) {
    if (_sGrade < 1 || _eGrade < 1)
        throw Form::GradeTooHighException();
    if (_sGrade > 150 || _eGrade > 150)
        throw Form::GradeTooLowException();
}

Form::~Form() {
}

Form::Form(const Form &tocopy) : _name(tocopy._name), _signed(tocopy._signed), _sGrade(tocopy._sGrade), _eGrade(tocopy._eGrade) {
}

Form &Form::operator=(Form const &tocopy) {
    (std::string)_name = tocopy._name;
    _signed = tocopy._signed;
    return *this;
}

const char *Form::GradeTooHighException ::what() const throw() {
    return "The grade is too high!";
};

const char *Form::GradeTooLowException ::what() const throw() {
    return "The grade is too low!";
}

const char *Form::FormAlreadySignedException ::what() const throw() {
    return "The form is already signed!";
}


const std::string &Form::getName() const {
    return _name;
}

int Form::getSGrade() const {
    return _sGrade;
}

int Form::getEGrade() const {
    return _eGrade;
}

bool Form::isSigned() const {
    return _signed;
}

void Form::beSigned(Bureaucrat const &b) {
    if (b.getGrade() > _sGrade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::FormAlreadySignedException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &f) {
    out << f.getName() << " [" << ((f.isSigned()) ? "Signed" : "Unsigned")
	<< "] < Signing Grade Required:" << f.getSGrade() << ", Executing Grade Required:" << f.getEGrade() << " >";
	return (out);
}