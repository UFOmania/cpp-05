#ifndef FORMNOTSIGNEDEXCEPTION
#define FORMNOTSIGNEDEXCEPTION

#include <exception>

class FormNotSignedException : public std::exception
{
	public:
		~FormNotSignedException() throw();
		FormNotSignedException();

		const char *what() const throw();
};


#endif