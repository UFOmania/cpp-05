#include "PresidentialPardonForm.hpp"
#include "FormNotSignedException.hpp"
#include "GradeTooLowException.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 145, 137), _target("default_target")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: AForm("PresidentialPardonForm", 145, 137), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) 
: AForm(other.getName(), 145, 137), _target(other._target)
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