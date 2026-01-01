#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "FormIsUnknownException.hpp"
#include "AForm.hpp"


AForm *Intern::makeForm(const std::string & formName, const std::string & formTarget)
{

	const std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
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
	throw FormIsUnknownException();
}