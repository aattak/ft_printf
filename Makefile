# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aattak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 17:49:23 by aattak            #+#    #+#              #
#    Updated: 2023/12/23 18:29:06 by aattak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_c.c ft_printf_i.c ft_printf_p.c ft_printf_s.c ft_printf_ui.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

${NAME}: ${SRCS} ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -f ${NAME}

all: ${NAME}

re: fclean all
