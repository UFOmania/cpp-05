src = 	AForm.cpp\
		Bureaucrat.cpp\
		FormAlreadySignedException.cpp\
		FormIsUnknownException.cpp\
		FormNotSignedException.cpp\
		GradeTooHighException.cpp\
		GradeTooLowException.cpp\
		Intern.cpp\
		main.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp

flags = -Wall -Wextra -Werror -MMD -std=c++98

obj = $(src:.cpp=.o)
deps = $(src:.cpp=.d)

-include deps

NAME= app


all: $(NAME)

$(NAME): $(obj)
	c++ $(flags) $(obj) -o $@

%.o: %.cpp
	c++ $(flags) -c $< -o $@

clean:
	rm -f $(obj) $(deps)

fclean: clean
	rm -f $(NAME)

re: fclean all