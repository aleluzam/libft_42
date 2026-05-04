CC := cc
CFLAGS := -Wall -Wextra -Werror
ARS := ar rcs
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
TARGET := libft.a

all: $(TARGET)

$(TARGET): $(OBJS)
	$(ARS) $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
