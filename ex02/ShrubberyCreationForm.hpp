#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    public:
        ~ShrubberyCreationForm();
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

        void execute(Bureaucrat const & executor) const;

};


#endif