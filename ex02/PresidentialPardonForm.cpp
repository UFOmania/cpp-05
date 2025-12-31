#include "PresidentialPardonForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 145, 137)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) 
: AForm(AForm::getName(), 145, 137)
{
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if (this == &other)
        return *this;
    
    setIsSigned(other.getIsSigned());
    setGradeToExec(other.getGradeToExec());
    setGradeToSign(other.getGradeToSign());
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName()  << " exec chru\n";
}