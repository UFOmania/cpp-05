#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) 
: AForm(AForm::getName(), 145, 137)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this == &other)
        return *this;
    
    setIsSigned(other.getIsSigned());
    setGradeToExec(other.getGradeToExec());
    setGradeToSign(other.getGradeToSign());
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName()  << " exec chru\n";
}



