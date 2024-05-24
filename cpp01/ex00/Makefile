NAME =  zombie
SRC =  zombie.cpp   main.cpp  newZombie.cpp  randomChump.cpp
OBJ = ${SRC:.cpp=.o}
CC = g++ 
CPPFLAGS =  -Wall -Wextra -Werror 

all :$(NAME)
$(NAME):$(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all