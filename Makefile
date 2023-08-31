# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ancolmen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 12:39:51 by ancolmen          #+#    #+#              #
#    Updated: 2022/11/26 23:27:32 by ancolmen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/ft_printf.c \
	./src/ft_format_base.c \
	./src/ft_putchar.c \
	./src/ft_putstr.c \
	./src/ft_putnbr.c \
	./src/ft_putnbr_base.c \
	./src/ft_putptr.c \
	./src/ft_strlen.c 

INC = ./include

OBJS = ${SRCS:.c=.o}

CC = cc

RM = rm -f

LIBC = ar rc


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
