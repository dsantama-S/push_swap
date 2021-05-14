LIB		=	push_swap.h
SRCS	=	push_swap.c sw_ps.c rotate.c
			
OBJS	=	$(SRCS:.c=.o)
NAME	=	push_swap
CFLAGS	=	-Wall -Werror -Wextra
LIBS	=	libft.a

$(NAME):	$(OBJS) _libft
			@gcc -o $(NAME) $(OBJS) $(LIBS)

.c.o:
			gcc -Wall -Werror -Wextra -I. -c $< -o $(<:.c=.o)

_libft:
			@make -C libft
			mv ./libft/libft.a ./

all:		$(NAME)

clean:
			rm -f $(OBJS) $(LIBS)
			@make clean -C libft

fclean:		clean
			rm -f $(NAME) $(LIBS)
			@make fclean -C libft

re:			fclean all

.PHONY:		all clean fclean re