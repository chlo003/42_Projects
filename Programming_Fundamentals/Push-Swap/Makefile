# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/01 19:49:26 by bdahmoul          #+#    #+#              #
#    Updated: 2026/08/03 12:25:54 by bdahmoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC_DIR = include
OBJ_DIR = obj

SRC = \
	parsing/main.c \
	parsing/list.c \
	parsing/check.c \
	parsing/print.c \
	parsing/split.c \
	parsing/number.c \
	parsing/bench.c \
	parsing/utils.c \
	operation/swap.c \
	operation/push.c \
	operation/rotate.c \
	operation/reverse_rotate.c \
	algo/disorder.c \
	algo/find_min_position.c \
	algo/selection_sort.c \
	algo/assign_index.c \
	algo/radix_sort.c \
	algo/find_max_position.c \
	algo/chunk_sort.c \
	algo/adaptive_sort.c \
	algo/sort_stack.c \
	printf/ft_printf.c \
	printf/ft_putchar.c \
	printf/ft_putstr.c \
	printf/ft_putnbr.c \
	printf/ft_put_unsigned.c \
	printf/ft_puthex.c \
	printf/ft_putuhex.c \
	printf/ft_putaddr.c \
	printf/ft_strlen.c \
	algo/sort_three.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I$(INC_DIR) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re