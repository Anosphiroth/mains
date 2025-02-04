CC=cc
CFLAGS=-Wall -Wextra -Werror
AR=ar
ARFLAGS=-r -c -s

HDR=libft.h

SRC=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
    ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
    ft_strrchr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c \
    ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

SRC_BONUS=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC_PRTF=ft_printf.c ft_itoa_hex.c ft_uitoa.c ft_print_utils.c ft_print_utils_hex.c

OBJ=$(SRC:.c=.o)
OBJ_BONUS=$(SRC_BONUS:.c=.o)
OBJ_PRTF=$(SRC_PRTF:.c=.o)

NAME=libft.a

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_PRTF)
	$(AR) $(ARFLAGS) $@ $^

bonus: $(OBJ) $(OBJ_PRTF) $(OBJ_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c $(HDR) Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ) $(OBJ_PRTF) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
