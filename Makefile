CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
NAME = libftprintf.a

SRC = ft_printf.c ft_printf_utils.c ft_ptnbr_printf_utils.c

SRC_B = ft_printf_utils_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)

$(NAME):$(OBJ) $(OBJ_B)
	$(AR) $(NAME) $?

bonus: $(OBJ_B)
	$(AR) $(NAME) $?

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: 	clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re