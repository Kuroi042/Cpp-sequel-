NAME = 	Mutant

CC = c++  
CXXFLAGS =    -std=c++98    -fsanitize=address -g 

SRC_PS = main.cpp MutantStack.cpp    
OBJS_C = ${SRC_PS:.cpp=.o} 

all: $(NAME)
$(NAME):  $(OBJS_C)
	@$(CC)  $(CXXFLAGS) $(OBJS_C) -o $(NAME)


clean :
	rm -rf  $(OBJS_C)

fclean : clean
	rm -rf $(NAME)

re : fclean all