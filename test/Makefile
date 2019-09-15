# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgero <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 13:55:22 by rgero             #+#    #+#              #
#    Updated: 2019/09/15 16:20:48 by rgero            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = ft_strsplit
PATH_SRCS = ../

.PHONY: all ft_putnbr ft_memcmp ft_strncpy ft_strcat

all: $(TARGET)

ft_putnbr: 
	gcc -Wall -Wextra -Werror \
	$(PATH_SRCS)ft_putnbr.c $(PATH_SRCS)ft_putstr.c $(PATH_SRCS)ft_putchar.c \
	main_$@.c \
	-o $@
ft_strcpy: main_ft_strcpy.c
	gcc -Wall -Wextra -Werror \
	$(PATH_SRCS)$< \
	$(PATH_SRCS)ft_putnbr.c $(PATH_SRCS)ft_putstr.c $(PATH_SRCS)ft_putchar.c \
	main_$@.c \
	-o $@
$(TARGET): main_$(TARGET).c
	gcc -Wall -Wextra -Werror \
    $(PATH_SRCS)$@.c \
	$(PATH_SRCS)ft_putnbr.c $(PATH_SRCS)ft_putstr.c $(PATH_SRCS)ft_putchar.c \
	$(PATH_SRCS)ft_strlen.c $(PATH_SRCS)ft_strdup.c $(PATH_SRCS)ft_strncpy.c \
	main_$@.c -o $@
