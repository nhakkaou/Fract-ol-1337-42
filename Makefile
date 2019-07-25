# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/26 20:10:48 by nhakkaou          #+#    #+#              #
#    Updated: 2019/06/02 19:10:55 by nhakkaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CFLAGS = -Wall -Wextra -Werror

HEAD = fractol.h

SRC = src/*.c

OBJ = *.o

all:
	make -C libft/
	gcc -c $(SRC)
	gcc $(CFLAGS) -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit  $(OBJ) libft/libft.a -o $(NAME)
clean:
	     make -C libft/ clean
		 rm -f $(OBJ)
fclean: clean
	        make -C libft/ fclean
			rm $(NAME)

re: fclean all
