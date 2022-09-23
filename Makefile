SRCLIST	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_substr.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRCDIR	= 
ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
SRCS	= ${addprefix ${SRCDIR}, ${SRCLIST}}

OBJS	= ${SRCS:.c=.o}

INCH	= libft.h

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

NAME	= libft.a

.c.o:
	${CC} ${CFLAGS} -include${INCH} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar -crs ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

bonus:  
