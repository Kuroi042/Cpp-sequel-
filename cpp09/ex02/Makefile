NAME = PmergeMe

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

 SRC_PS = main.cpp  PmergeMe.cpp
OBJS_C = ${SRC_PS:.cpp=.o}


HEADERS = BitcoinExchange.hpp

all: $(NAME)

$(NAME): $(OBJS_C)
	@$(CC) $(CXXFLAGS) $(OBJS_C) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_C)

fclean: clean
	rm -rf $(NAME)

re: fclean all