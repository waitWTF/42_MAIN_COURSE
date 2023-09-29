CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I./ft_printf/Includes/.
INCLUDES = ./ft_printf/libft/libft.a
PRINTF = ./ft_printf/printf/libftprintf.a

Header = ./ft_printf/libft/libft.h

SRNAME = server
CLNAME = client

all: $(CLNAME) $(SRNAME)

$(SRNAME): $(PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) $(PRINTF) server.c -o $(SRNAME)

$(CLNAME): $(PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) $(PRINTF) client.c -o $(CLNAME)

clean:
	rm server client

fclean: clean
	make -C ft_printf fclean

re: clean all

$(PRINTF):
	make -C ft_printf