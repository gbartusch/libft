CFILES = ft_isdigit.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c ft_isprint.c ft_putnbr_fd.c ft_strlen.c ft_itoa.c \
ft_putstr_fd.c ft_strmapi.c ft_atoi.c ft_memchr.c ft_split.c ft_strncmp.c ft_bzero.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c	ft_memcpy.c	ft_strdup.c	ft_strrchr.c ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c ft_isalpha.c \
ft_memset.c	ft_strjoin.c ft_substr.c ft_isascii.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean 
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re