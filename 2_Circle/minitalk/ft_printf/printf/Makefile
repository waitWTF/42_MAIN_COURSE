NAME = libftprintf.a

SRC =   ft_printf.c \
                ft_itoa.c \
                ft_print_hex.c \
                ft_print_ptr.c \
                ft_print_unsigned.c \
                ft_print_utils.c \
                ft_putchar_fd.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

Header = ft_printf.h

all: $(NAME)

$(NAME):
	cc -c $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all