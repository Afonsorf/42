# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afernand <afernand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 17:58:34 by afernand          #+#    #+#              #
#    Updated: 2020/11/11 19:28:57 by anunes-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCDIR = src
SRC = $(wildcard $(SRCDIR)/*.c)
INCDIR = includes
CFLAGS = -Wall -Wextra -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC) -I $(INCDIR)

fclean:
	rm -f $(NAME)

norm :
	norminette *.c

re: fclean all
