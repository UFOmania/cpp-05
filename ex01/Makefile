src = 	Bureaucrat.cpp\
		Form.cpp\
		main.cpp	

flags = -Wall -Wextra -Werror -std=c++98

obj = $(src:.cpp=.o)
deps = Bureaucrat.hpp Form.hpp

NAME= app


all: $(NAME)

$(NAME): $(obj)
	c++ $(flags) $(obj) -o $@

%.o: %.cpp
	c++ $(flags) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all