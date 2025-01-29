CC=cc
CFLAGS=-Wall -Wextra -Werror
INC=-I$(LIBFT_DIR)

HDR=push_swap.h

SRC=push_swap.c \
	stack_create.c stack_func.c \
	instructions.c instructions_printing.c double_instructions.c \
	sorting_short.c sorting_long.c sorting_utils.c \
	array_func.c calc_move.c sorting_long_alt.c

OBJ=$(SRC:.c=.o)

NAME=push_swap

LIBFT_DIR=libft
LIBFT=libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/$(LIBFT)

$(LIBFT): $(LIBFT_DIR)/Makefile
	@make -C $(LIBFT_DIR) all

%.o: %.c $(HDR) Makefile
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT_DIR) $@

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) $@

re: fclean all

.PHONY: all bonus clean fclean re
