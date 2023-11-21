# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 22:01:56 by iez-zagh          #+#    #+#              #
#    Updated: 2023/11/21 12:41:37 by iez-zagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFALGS= -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

SOURCES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_base.c ft_print_adress.c ft_putnbr_uns.c

OBJS = ${SOURCES:%.c=%.o}

%.o:%.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all