
  
SRCS		=	fonctions.c ft_printf.c print_hexa.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

RM			=	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror 
#-fsanitize=address -g3

NAME		= 	libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re