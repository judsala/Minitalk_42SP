NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_printf.c print_char.c print_hex.c print_int.c print_pointer.c \
	print_str.c print_unsigned.c ft_isdigit.c ft_strlen.c

OBJ =  ft_atoi.o ft_bzero.o ft_calloc.o ft_putchar_fd.o ft_putstr_fd.o \
	ft_printf.o print_char.o print_hex.o print_int.o print_pointer.o \
	print_str.o print_unsigned.o ft_isdigit.o ft_strlen.o

RM = rm -f

all: $(NAME)
		
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:	
	$(RM) $(OBJ)
		
fclean:	clean
	$(RM) $(NAME)
		
re: fclean all				

.PHONY: all clean fclean re
