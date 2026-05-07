CC := cc
CFLAGS := -Wall -Wextra -Werror
ARS := ar rcs
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
NAME := libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(ARS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
