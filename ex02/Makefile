src =	AForm.cpp\
		Bureaucrat.cpp\
		main.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp

deps = 	AForm.hpp\
		Bureaucrat.hpp\
		PresidentialPardonForm.hpp\
		RobotomyRequestForm.hpp\
		ShrubberyCreationForm.hpp

flags = -Wall -Wextra -Werror -std=c++98

obj = $(src:.cpp=.o)


NAME= app


all: $(NAME)

$(NAME): $(obj)
	c++ $(flags) $(obj) -o $@

%.o: %.cpp $(deps)
	c++ $(flags) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all