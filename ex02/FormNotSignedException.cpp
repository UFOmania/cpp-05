#include <iostream>
#include "FormNotSignedException.hpp"

FormNotSignedException::~FormNotSignedException() throw() {}
FormNotSignedException::FormNotSignedException(){}

const char *FormNotSignedException::what() const throw()
{
	return "Form is not Signed";
}