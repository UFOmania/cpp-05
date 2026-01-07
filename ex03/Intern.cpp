#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <iostream>


Intern::~Intern(){}
Intern::Intern(){}
Intern::Intern(const Intern &other){(void)other;}
Intern &Intern::operator=(const Intern &other){
	(void)other;
	return *this;
}


AForm *Intern::makeForm(const std::string & formName, const std::string & formTarget)
{

	const std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			std::cout << "Intern creates " << forms[i] << "\n";
			switch (i)
			{
				case 0:
					return new ShrubberyCreationForm(formTarget);
				case 1:
					return new RobotomyRequestForm(formTarget);
				case 2:
					return new PresidentialPardonForm(formTarget);
			}
		}
	}
	std::cout << "Intern couldn't create " << formName << "\n";
	return NULL;
}

