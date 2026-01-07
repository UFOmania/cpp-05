#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <exception>
class AForm;

class Intern {
	public:
		~Intern();
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		
		AForm *makeForm(const std::string & formName, const std::string & formTarget);



};


#endif