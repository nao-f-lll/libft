NAME=libft.a
CC= cc
FLAGS= -Wall -Wextra -Werror
FUNCTIONS= $(wildcard *.c)
OBJ= $(FUNCTIONS:.c=.o)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
