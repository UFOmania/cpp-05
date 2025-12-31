#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    public:
        ~RobotomyRequestForm();
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &other);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

        void execute(Bureaucrat const & executor) const;

};


#endif