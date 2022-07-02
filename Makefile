CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a
SRCS	= ft_printf.c / ft_tools.c
OBJS	= $(SRCS:.c=.o)
all:	$(NAME)
$(NAME)	= $(OBJS)
	ar rcs $(NAME) $(OBJS)
RM	= /bin/bash/rm -rf
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re:	fclean
	$(NAME)
.PHONY	= all clean fclean re
