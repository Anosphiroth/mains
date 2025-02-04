CC=cc
CFLAGS=-Wall -Wextra -Werror -g3
INC=-I$(LIBFT_DIR) -I$(HDR_DIR)

HDR_DIR=header
HDR=push_swap.h

SRC_DIR=src
SRC=$(SRC_DIR)/push_swap.c \
	$(SRC_DIR)/stack_create.c $(SRC_DIR)/stack_func.c \
	$(SRC_DIR)/instructions.c $(SRC_DIR)/instructions_printing.c $(SRC_DIR)/double_instructions.c \
	$(SRC_DIR)/sorting_short.c $(SRC_DIR)/sorting_long.c $(SRC_DIR)/sorting_utils.c \
	$(SRC_DIR)/array_func.c $(SRC_DIR)/calc_move.c

OBJ_DIR=obj
OBJ=$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

NAME=push_swap

LIBFT_DIR=libft
LIBFT=$(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $@

$(LIBFT): $(LIBFT_DIR)/Makefile
	@make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HDR_DIR)/$(HDR) Makefile | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -rf $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all bonus clean fclean re
