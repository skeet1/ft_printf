# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 08:27:18 by mkarim            #+#    #+#              #
#    Updated: 2021/11/20 07:08:25 by mkarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

HEADER = ft_printf.h

SRC = ft_print_c.c ft_print_s.c ft_printf.c ft_print_x.c ft_print_X.c ft_print_p.c ft_print_u.c ft_print_x.c \
	 ft_putchar.c ft_putnbr.c ft_strdup.c ft_strlen.c  

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
