CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCDIR = srcs/
SOURCES = $(SRCDIR)ft_putchar.c $(SRCDIR)ft_swap.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_strcmp.c
OBJECT = $(SOURCES:.c=.o)
INCLUDES = includes

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDES)

$(NAME) : $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

all : $(NAME)

clean :
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re 
