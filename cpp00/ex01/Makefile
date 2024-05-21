NAME = Phonebook
SRC = phonebook.cpp  contact.cpp
OBJ  = ${SRC:.cpp=.o}
CC = g++ -g
CPPFLAGS = -Wall -Wextra -Werror 
all : $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re:  fclean all