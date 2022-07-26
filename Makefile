# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 13:12:00 by rajacque          #+#    #+#              #
#    Updated: 2022/07/26 12:57:27 by rajacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c -g
RM		= rm -rf
AR		= ar rcs

SRCS	= ft_printf.c\
			ft_char_Tools.c\
			ft_nbr_Tools.c\

OBJS = $(SRCS:.c=.o)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
