# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 18:29:55 by eelmoham          #+#    #+#              #
#    Updated: 2021/12/08 18:42:38 by eelmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS=-Wall -Wextra -Werror
AR= ar rcs
RM =rm  -rf
FILES=	ft_putnbr ft_putnbr_base ft_putstr \
		ft_putchar ft_putunsigned ft_printf
SRC = $(FILES:=.c)
OBJ= $(FILES:=.o)
NAME =libftprintf.a


all:$(NAME)
$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY:all clean fclean re