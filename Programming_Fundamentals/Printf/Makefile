NAME 	=	libftprintf.a

CC 		=	gcc

CFLAGS 	=	-Wall -Wextra -Werror

EXEC 	= $(NAME)

SRC 	=	ft_functions.c\
			ft_printf.c\

OBJ 	=	$(SRC:.c=.o)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

all 	: $(NAME)

clean 	:
	rm -f $(OBJ)

fclean 	: clean
	rm -f $(NAME)

re 		: fclean all

.PHONY 	: all clean fclean re