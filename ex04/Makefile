NAME = string_replacer
CXX = c++
CXXFLAGS = -Wextra -Wall -Werror -std=c++98
SRCS =	main.cpp StringReplacer.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re