CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
NAME	= exec
SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS	= $(SRCS:cpp=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY: all clean fclean re

.cpp.o:
	$(CC) $(CFLAGS) $< -c

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all