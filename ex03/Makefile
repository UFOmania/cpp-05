src = 	AForm.cpp\
		Bureaucrat.cpp\
		Intern.cpp\
		main.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp

flags = -Wall -Wextra -Werror -std=c++98

obj = $(src:.cpp=.o)
deps = 	AForm.hpp\
		Bureaucrat.hpp\
		PresidentialPardonForm.hpp\
		RobotomyRequestForm.hpp\
		ShrubberyCreationForm.hpp\
		Intern.hpp

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