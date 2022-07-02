CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
SRCS	= ft_printf.c / ft_tools.c /ft_put_type.c
OBJS	= $(SRCS:.c=.o)
NAME	= libftprintf.a
$(NAME)	: $(OBJS)
	ar rcs $(NAME) $(OBJS)
all:	$(NAME)
RM	= /bin/bash/rm -rf
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re:	fclean
	$(NAME)
.PHONY	: all clean fclean re
