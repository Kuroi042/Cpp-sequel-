NAME = megaphone
SRC = megaphone.cpp
OBJ =$(SRC:.cpp=.o)
CPPFLAGS = #-Wall -Wextra -Werror 
CC = g++
CPPFLAGS = -Wall -Wextra   -Werror
all : $(NAME)
$(NAME):$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all 