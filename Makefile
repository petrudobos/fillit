# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedobos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 14:35:31 by pedobos           #+#    #+#              #
#    Updated: 2018/01/09 14:35:41 by pedobos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

INCL = -I./fillit.h

RM = /bin/rm -f

LIBFT = libft.a

LDFLAGS = -L./libft/

LDLIBS = -lft

SRC = aff_matrix.c checker.c fillit.c main.c utils.c

OBJT = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C ./libft

$(OBJT):
	gcc -Wall -Wextra -Werror -c $(SRC)

$(NAME): $(OBJT) $(LIBFT)
	gcc -Wall -Wextra -Werror $(INCL) $(OBJT) -o $(NAME) $(LDFLAGS) $(LDLIBS)

clean:
	$(RM) $(OBJT)
	make clean -C ./libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./libft

re:	fclean all

.PHONY: all clean fclean re
