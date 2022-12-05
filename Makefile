SRCS	=	ft_printf.c\
			ft_phexa.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_countwrite.c\

HEAD	=	ft_printf.h

OBJS	=	$(SRCS:.c=.o)

NAME	=	libftprintf.a

ARC		=	ar rc

CC		=	gcc

RM		=	rm -f

FLAG	=	-Wall -Wextra -Werror

%.o: %.c Makefile $(HEAD)
		$(CC) $(FLAG) -c $< -o $@ -I.

$(NAME)	:	$(OBJS)
		$(ARC) $(NAME) $(OBJS)

OBJS_BONUS	=	$(SRCS:.c=.o) $(BONUS:.c=.o)

all:	$(NAME)

bonus:	$(OBJS_BONUS) $(HEAD)
	$(ARC) $(NAME) $(OBJS_BONUS)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY	:	all clean flean re
