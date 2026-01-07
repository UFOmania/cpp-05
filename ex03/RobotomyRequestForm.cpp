#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default_target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45) , _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) 
: AForm(other.getName(), 72, 45), _target(other._target)
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
	std::srand(std::time(0));
	if (std::rand() & 1)
		std::cout << _target << " has been successfully robotomized\n";
	else
		std::cout << "Failed to robotomize " << _target << "\n";
	
}