# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgero <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 15:46:56 by rgero             #+#    #+#              #
#    Updated: 2019/09/13 16:01:38 by rgero            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRCS = ./
PATH_HEADER = ./
SRCS = ft_*.c 
OBJS = ft_*.o 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror -c -I $(PATH_HEADER) $(SRCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
