# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niclaw <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 13:59:17 by niclaw            #+#    #+#              #
#    Updated: 2022/09/24 13:59:27 by niclaw           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCLIST	= 
SRCDIR	= 
BONUS_SRC	=  
SRCS	= ${addprefix ${SRCDIR}, ${SRCLIST}}

OBJS	= ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}
INCH	= printf.h
INCHB	= libft_bonus.h

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

NAME	= libftprintf.a

%.o: %.c ${INCH}
	${CC} ${CFLAGS} -include ${INCH} -c $< -o ${<:.c=.o}

%bonus.o:	%bonus.c ${INCHB}
	${CC} ${CFLAGS} -include ${INCHB} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar -crs ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME} 

re:	fclean all

.PHONY:	all clean fclean re  

bonus: ${BONUS_OBJS}
	ar -crs ${NAME} ${BONUS_OBJS}