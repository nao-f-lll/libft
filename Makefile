NAME=libft.a

CC= cc
FLAGS= -Wall -Wextra -Werror
FUNCTIONS= ft_bzero.c\
           ft_isalpha.c\
           ft_isdigit.c\
           ft_memchr.c\
           ft_memmove.c\
           ft_strchr.c\
           ft_strlcpy.c\
           ft_strncmp.c\
           ft_tolower.c\
           ft_isalnum.c\
           ft_isascii.c\
           ft_isprint.c\
           ft_memcpy.c\
           ft_memset.c\
           ft_strlcat.c\
           ft_strlen.c\
           ft_strrchr.c\
           ft_toupper.c\
	   ft_memcmp.c\
	   ft_strnstr
			
OBJ= $(FUNCTIONS:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
		rm -rf $(OBJ)

