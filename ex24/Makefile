#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/16 16:09:55 by bwaegene          #+#    #+#              #
#    Updated: 2016/12/16 16:09:59 by bwaegene         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAFS = -Wall -Wextra -Werror
NAME = libft.a

SOURCES = ./srcs/ft_putchar.c      \
		srcs/ft_putstr.c           \
		srcs/ft_strcmp.c           \
		srcs/ft_strlen.c           \
		srcs/ft_swap.c

OBJECTS = ft_putchar.o        \
		ft_putstr.o           \
		ft_strcmp.o           \
		ft_strlen.o           \
		ft_swap.o

HEADERS = includes/ft.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES) -I"includes"

.PHONY: clean

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

