#include <iostream>
#include "FormIsUnknownException.hpp"

FormIsUnknownException::~FormIsUnknownException() throw() {}
FormIsUnknownException::FormIsUnknownException(){}

const char *FormIsUnknownException::what() const throw()
{
	return "Form is Unknown";
}