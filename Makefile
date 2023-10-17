NAME = libftprintf.a
CC= cc
FLAGS= -Wall -Wextra -Werror
SRC= ft_printf.c
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
        $(RM) $(OBJS) $(BOBJS)

fclean:
        $(RM) $(OBJS) $(BOBJS) libft.a

re: fclean all

#bonus: $(OBJS) $(BOBJS)
#        ar rc $(NAME) $(OBJS) $(BOBJS)
