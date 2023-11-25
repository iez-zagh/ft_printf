# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 22:01:56 by iez-zagh          #+#    #+#              #
#    Updated: 2023/11/25 22:19:06 by iez-zagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -r
RM = rm -f

SOURCES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_base.c ft_print_adress.c \
			ft_putnbr_uns.c ft_printf.c

OBJS = ${SOURCES:.c = .o}

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all