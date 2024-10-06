NAME=libft.a
CC= cc
FLAGS= -Wall -Wextra -Werror
M_FUNC= ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
	ft_strchr.c ft_strdup.c ft_strjoin.c ft_striteri.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
       	ft_strtrim.c ft_substr.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strmapi.c\
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c\
	ft_atoi.c ft_itoa.c ft_toupper.c ft_tolower.c\
	ft_calloc.c ft_split.c\

B_FUNC= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c\
       	ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c\
	ft_lstsize_bonus.c

M_OBJ= $(M_FUNC:.c=.o)
B_OBJ=$(B_FUNC:.c=.o)

$(NAME): $(M_OBJ)
	@ar rc $(NAME) $(M_OBJ)

bonus: $(B_OBJ)
	@ar rc $(NAME) $(B_OBJ)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(M_OBJ) $(B_OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
