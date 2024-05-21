NAME = Phonebook
SRC = phonebook.cpp 
CC = g++ -g
OBJ  = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror 
all : $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: all fclean