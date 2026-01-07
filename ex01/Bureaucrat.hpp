
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP 

#include <string>
#include <ostream>
#include <exception>
class Form;

class Bureaucrat  
{

    private:
        const std::string _name;
        int     _grade;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw();
        };
 
        ~Bureaucrat();
        Bureaucrat();
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat(const Bureaucrat & other);
        Bureaucrat &operator=(const Bureaucrat & other);
        std::string const & getName() const;
        int getGrade() const;

        void incrementGrade(int by);
        void decrementGrade(int by);

        void signForm(Form &form);

        
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif