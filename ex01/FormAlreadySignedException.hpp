#ifndef FORMALREADYSIGNEDEXCEPTION
#define FORMALREADYSIGNEDEXCEPTION

#include <exception>

class FormAlreadySignedException : public std::exception
{
	public:
		~FormAlreadySignedException() throw();
		FormAlreadySignedException();

		const char *what() const throw();
};


#endif