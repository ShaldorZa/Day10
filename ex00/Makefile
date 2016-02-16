# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaniena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/15 08:13:30 by shaniena          #+#    #+#              #
#    Updated: 2016/02/15 11:02:48 by shaniena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_LIBS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c \
		   ./srcs/ft_strcmp ./srcs/ft_strlen.c

OUTPUT = ./ft_putchar.o ./ft_str.o ./ft_strcmp.o \
		 ./ft_strlen.o	./ft_swap.o

DIRH = ./includes

all: $(NAME)

$(NAME):
	gcc -I/includes/ -c $(SRC_LIBS)
	ar rc libft.a $(OUTPUT)
	ranlib $(NAME)

clean:
	rm -f $(OUTPUT)
fclean: clean
	rm -f $(NAME)

re: fclean all
