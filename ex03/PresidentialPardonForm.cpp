#include "PresidentialPardonForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default_target")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) 
: AForm(other.getName(), 25, 5), _target(other._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if (this == &other)
        return *this;
    
    AForm::operator=(other);
	_target = other._target;
    return *this;
}

void PresidentialPardonForm::exec() const
{
    
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}