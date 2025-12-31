src = AForm.cpp GradeTooLowException.cpp  ShrubberyCreationForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp main.cpp GradeTooHighException.cpp  RobotomyRequestForm.cpp
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