src = Bureaucrat.cpp GradeTooHighException.cpp GradeTooLowException.cpp main.cpp

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