# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afernand <afernand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 17:58:34 by afernand          #+#    #+#              #
#    Updated: 2020/11/08 18:00:12 by afernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = *.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

norm :
	norminette *.c

re: fclean all
