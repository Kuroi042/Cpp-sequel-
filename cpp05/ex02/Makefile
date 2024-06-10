NAME = 	Bureaucrat02

CC = c++  
CXXFLAGS = -Wall -Wextra -Werror  -g -std=c++98   # -fsanitize=thread -g 

SRC_PS = main.cpp  Bureaucrat.cpp ShrubberyCreationForm.cpp  Form.cpp RobotomyRequestForm.cpp  PresidentialPardonForm.cpp
OBJS_C = ${SRC_PS:.cpp=.o} 

all: $(NAME)
$(NAME):  $(OBJS_C)
	@$(CC)  $(CXXFLAGS) $(OBJS_C) -o $(NAME)


clean :
	rm -rf  $(OBJS_C)

fclean : clean
	rm -rf $(NAME)

re : fclean all

 