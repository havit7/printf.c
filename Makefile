NAME	= libftprintf.a

SRCS	= ft_printf.c ft_putil.c

OBJS	= &{SRCS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

RM	= rm -f

all: $(NAME)

$(NAME):	${OBJS}
		ar crs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all, clean, fclean, re
