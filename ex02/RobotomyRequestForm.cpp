#include "RobotomyRequestForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 145, 137)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) 
: AForm(AForm::getName(), 145, 137)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this == &other)
        return *this;
    
    setIsSigned(other.getIsSigned());
    setGradeToExec(other.getGradeToExec());
    setGradeToSign(other.getGradeToSign());
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName()  << " exec chru\n";
}