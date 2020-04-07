#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>

class Bureaucrat
{
    private:
        Bureaucrat();

    protected:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &tocopyc);
        Bureaucrat &operator=(Bureaucrat const &tocopy);

        class GradeTooHighException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        const std::string &getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c);

#endif