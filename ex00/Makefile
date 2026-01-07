src = Bureaucrat.cpp main.cpp

flags = -Wall -Wextra -Werror -std=c++98

obj = $(src:.cpp=.o)

NAME = app

all: $(NAME)

$(NAME): $(obj) 
	c++ $(flags) $(obj) -o $@

%.o: %.cpp Bureaucrat.hpp
	c++ $(flags) -c $< -o $@

clean:
	rm -f $(obj) $(deps)

fclean: clean
	rm -f $(NAME)

re: fclean all