# cible : dependance \
	commande
CC=gcc

NAME=libft.a

SRC= ft_atoi.c     ft_isalpha.c  ft_memchr.c   ft_memset.c      ft_strjoin.c  ft_strncmp.c  ft_substr.c	\
	ft_bzero.c    ft_isascii.c  ft_memcmp.c   ft_putchar_fd.c  ft_strlcat.c  ft_strnstr.c  ft_tolower.c \
	ft_calloc.c   ft_isdigit.c  ft_memcpy.c   ft_strchr.c      ft_strlcpy.c  ft_strrchr.c  ft_toupper.c \
	ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strdup.c      ft_strlen.c   ft_strtrim.c ft_strmapi.c \
	ft_striteri.c  ft_putstr_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c  ft_split.c  ft_itoa.c \
	ft_memchr.c      ft_split.c     ft_strncmp.c	get_next_line.c		get_next_line_utils.c \
	ft_create_array.c ft_checktype.c ft_flags.c ft_get_length.c ft_integer_handler.c ft_itoa.c ft_justify_hexa.c \
	ft_justify_integer.c ft_justify_integer2.c ft_justifyptr.c ft_printchars.c ft_printf.c \
	ft_printhexa.c ft_printnb.c ft_printptr.c ft_printunsigned.c ft_str_handler.c minilibft.c

OBJ= $(SRC:%.c=%.o)

BONUS=  ft_lstadd_front.c  ft_lstclear.c  ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c  ft_lstmap.c  ft_lstnew.c ft_lstsize.c ft_lstadd_back.c

OBJ_BONUS= $(BONUS:%.c=%.o)

GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
NC=\033[0m # No Color

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "$(GREEN)Creating libft.a $(NC)"
	@echo "$(BLUE)libft.a created ! $(NC)"

bonus: $(OBJ_BONUS)
	@ar -rcs $(NAME) $(OBJ_BONUS)

%.o: %.c
	@$(CC) -Wall -Werror -Wextra -c $<
	@echo "$(GREEN)Compiling $< $(NC)"

clean :
	@echo "$(MAGENTA)Cleaning object files $(NC)"
	@rm -f *.o

fclean : clean
	@echo "$(MAGENTA)Cleaning libft.a $(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus