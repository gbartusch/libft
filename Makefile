NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isdigit.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c ft_isprint.c ft_putnbr_fd.c ft_strlen.c ft_itoa.c \
ft_putstr_fd.c ft_strmapi.c ft_atoi.c ft_memchr.c ft_split.c ft_strncmp.c ft_bzero.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c	ft_memcpy.c	ft_strdup.c	ft_strrchr.c ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c ft_isalpha.c \
ft_memset.c	ft_strjoin.c ft_substr.c ft_isascii.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c
OFILES = $(CFILES:.c=.o)
BONUS_CFILES = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUS_OFILES = $(BONUS_CFILES:.c=.o)
BONUS_DONE = .bonus_done

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

all: $(NAME)

bonus: $(NAME) $(BONUS_DONE)

$(BONUS_DONE): $(BONUS_OFILES)
	ar rcs $(NAME) $(BONUS_OFILES)
	touch $(BONUS_DONE)

clean:
	rm -f $(OFILES) $(BONUS_OFILES)

fclean: clean 
	rm -f $(NAME)
	rm -f $(BONUS_DONE)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re