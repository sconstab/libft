# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sconstab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:03:43 by sconstab          #+#    #+#              #
#    Updated: 2019/05/29 08:23:49 by sconstab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	-gcc -c -Wall -Wextra -Werror ft_*.c
	-ar rc $(NAME) ft_*.o

clean:
	-rm ft_*.o

fclean: clean
	-rm $(NAME)

re: fclean all
