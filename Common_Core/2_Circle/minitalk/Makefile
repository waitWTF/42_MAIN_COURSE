# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thandel <thandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 11:07:41 by thandel           #+#    #+#              #
#    Updated: 2023/10/10 17:23:00 by thandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color codes
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
NC = \033[0m

# Commands for echoing colored messages
ECHO_GREEN = @echo "$(GREEN)$1$(NC)"
ECHO_YELLOW = @echo "$(YELLOW)$1$(NC)"
ECHO_BLUE = @echo "$(BLUE)$1$(NC)"

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Paths and include directories
LIBFT_PATH = ./ft_printf/libft/
PRINTF_PATH = ./ft_printf/printf/
INCLUDE_DIRS = $(LIBFT_PATH) $(PRINTF_PATH) ./ft_printf/Includes/
vpath %.h $(INCLUDE_DIRS)

# Library targets
LIBFT = $(LIBFT_PATH)libft.a
PRINTF = $(PRINTF_PATH)libftprintf.a

# Executable targets
SRNAME = server
CLNAME = client

# Phony targets
.PHONY: all clean fclean re

# Default target
all: $(LIBFT) $(PRINTF) $(SRNAME) $(CLNAME)

# Compile the libft library
$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH) -s
	$(call ECHO_GREEN, "[LIBFT COMPILED]")

# Compile the printf library
$(PRINTF):
	@$(MAKE) -C $(PRINTF_PATH) -s
	$(call ECHO_YELLOW, "[PRINTF COMPILED]")

# Compile the server executable
$(SRNAME): $(PRINTF)
	@$(CC) $(CFLAGS) -no-pie $(INCLUDE_DIRS:%=-I%) server.c extra.c minitalk.h -o $(SRNAME) $(PRINTF) $(LIBFT)
	$(call ECHO_BLUE, "[SERVER COMPILED]")

# Compile the client executable
$(CLNAME): $(PRINTF)
	@$(CC) $(CFLAGS) -no-pie $(INCLUDE_DIRS:%=-I%) client.c minitalk.h -o $(CLNAME) $(PRINTF) $(LIBFT)
	$(call ECHO_BLUE, "[CLIENT COMPILED]")

# Clean generated files
clean:
	@rm -f server client
	@$(MAKE) -C $(LIBFT_PATH) clean -s
	@$(MAKE) -C $(PRINTF_PATH) clean -s

# Remove all generated files, including libraries
fclean: clean
	@rm -f $(LIBFT)
	@rm -f $(PRINTF)
	$(call ECHO_YELLOW, "[FCLEAN SUCCESSFULL]")

# Recompile everything
re: fclean all
	$(call ECHO_YELLOW, "[RECONSTRUCTION SUCCESSFULL]")
