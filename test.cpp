
#include <iostream>



void f(int i)
{
	if (i)
		throw std::runtime_error("hello");
}

int main()
{
	try{
		f(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "done\n";
	
}