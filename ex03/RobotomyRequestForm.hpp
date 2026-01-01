#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
    public:
        ~RobotomyRequestForm();
        RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(RobotomyRequestForm const &other);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

        void exec() const;

};


#endif