
#include <iostream>


class MyEx : public std::exception
{
	public:
		~MyEx() throw()
		{
			std::cout << "Ex dest\n";
		}

		const char *what() const throw()
		{
			return "reason";

		}
};

void f(int i)
{
	if (i)
		throw MyEx();
}

int main()
{
	try{
		f(1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << "done\n";
	
}