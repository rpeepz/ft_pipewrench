# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 17:59:26 by rpapagna          #+#    #+#              #
#    Updated: 2019/04/11 18:31:31 by rpapagna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

CFLAGS	= -Wall -Wextra -L libft/ -lft
INCL	= -I includes/ft_pipewrench.h

SRCS 	= srcs/ft_pipewrench.c \
		main.c

all:	$(NAME)

$(NAME):
		@echo "Building test program"
		gcc -g -o $(NAME) $(CFLAGS) $(SRCS) $(INCL)
		@echo "done"

clean:
		make -C libft clean

fclean: clean
		rm -f $(NAME)
		rm -rf $(NAME).dSYM

re: fclean all
