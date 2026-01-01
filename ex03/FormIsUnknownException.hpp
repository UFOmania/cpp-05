#ifndef FORMISUNKNOWNEXCEPTION
#define FORMISUNKNOWNEXCEPTION

#include <exception>

class FormIsUnknownException : public std::exception
{
	public:
		~FormIsUnknownException() throw();
		FormIsUnknownException();

		const char *what() const throw();
};


#endif