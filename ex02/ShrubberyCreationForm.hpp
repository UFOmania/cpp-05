#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
    public:
        ~ShrubberyCreationForm();
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

        void exec() const;

};


#endif