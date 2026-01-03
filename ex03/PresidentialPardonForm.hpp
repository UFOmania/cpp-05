#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private:
      std::string _target;
    public:
        ~PresidentialPardonForm();
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &other);
        PresidentialPardonForm(PresidentialPardonForm const &other);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

        void exec() const;

};


#endif