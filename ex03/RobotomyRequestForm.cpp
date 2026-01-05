#include "RobotomyRequestForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp" 
#include <cstdlib>

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default_target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45) , _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) 
: AForm(other.getName(), 145, 137), _target(other._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this == &other)
        return *this;
    
    AForm::operator=(other);
	_target = other._target;
    return *this;
}

void RobotomyRequestForm::exec() const
{
	std::cout << "drilling noise !!!!\n";
	srand(time(0));
	if (rand() & 2)
		std::cout << _target << " hase been successfully robotomized\n";
	
}