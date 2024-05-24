NAME = ex03
SRC = HumanA.cpp   HumanB.cpp     Weapon.cpp  main.cpp
CC = g++
CPPFLAGS = #-Wall -Wextra -Werror
OBJ = ${SRC:.cpp=.o}
all : $(NAME)
$(NAME):$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all