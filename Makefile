CC 		=	gcc

FLAGS 	=	-Wall -Werror -Wextra

NAME 	=	push_swap

SRC_DIR	=	./srcs/

C_FILE	=	push_swap.c \
			argument_checker.c \
			create_list.c	\
			one_arg_checker.c \
			multiple_arg_checker.c\
			swap_op.c\
			push_op.c\
			rotate_op.c\
			check_sort.c\

SRC		= $(addprefix $(SRC_DIR), $(C_FILE))

INCLUDE	= -Iinclude

OBJ		= $(SRC:.c=.o)

GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
NC=\033[0m # No Color

.c.o:
	@echo "$(GREEN)Compiling $< $(NC)"
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@make --no-print-directory -C libft
	@$(CC) $(OBJ) ./libft/libft.a -o $(NAME)
	@echo "$(YELLOW)push_swap created ! $(NC)"

clean:
	@make clean --no-print-directory -C libft
	@echo "$(MAGENTA)Cleaning push_swap object $(NC)"
	@rm -f $(OBJ)
	@echo "$(MAGENTA)Done. $(NC)"

fclean: clean
	@make fclean --no-print-directory -C libft
	@echo "$(MAGENTA)Removed push_swap executable ! $(NC)"
	@rm -f $(NAME)
	@echo "$(MAGENTA)Done. $(NC)"

test3:		$(NAME)	
		$(eval ARG = $(shell shuf -i 0-50 -n 3))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG)
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

test5:		$(NAME)	
		$(eval ARG = $(shell shuf -i 0-50 -n 5))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG) 
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

	
test100:	$(NAME)	
		$(eval ARG = $(shell shuf -i 0-1000 -n 100))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG) 
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

test500:	$(NAME)	
		$(eval ARG = $(shell shuf -i 0-2000 -n 500))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG) 
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

re : fclean all

.PHONE: all clean fclean re
