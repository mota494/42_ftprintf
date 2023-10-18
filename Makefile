NAME = libftprintf.a
CC= cc -g
FLAGS= -Wall -Wextra -Werror
SRC= ft_flags.c ft_printf.c ft_printhexa.c ft_printint.c ft_printpointer.c ft_putchar.c ft_putnbr.c ft_putstr.c
BSRC =
RM = rm -rf
OBJS=$(SRC:.c=.o)
BOBJS=$(BSRC:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $*.c -o $*.o

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

#bonus: $(OBJS) $(BOBJS)
#        ar rc $(NAME) $(OBJS) $(BOBJS)

exec:
	$(CC) $(SRC)
