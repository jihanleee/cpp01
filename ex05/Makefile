NAME = Harl

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

CC = c++

SRCS = main.cpp Harl.cpp

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f *.o */*.o 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all re
