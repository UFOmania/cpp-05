#include <iostream>
#include "FormAlreadySignedException.hpp"

FormAlreadySignedException::~FormAlreadySignedException() throw() {}
FormAlreadySignedException::FormAlreadySignedException(){}

const char *FormAlreadySignedException::what() const throw()
{
	return "Form is already Signed";
}