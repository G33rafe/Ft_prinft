# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 13:12:00 by rajacque          #+#    #+#              #
#    Updated: 2022/07/21 13:30:43 by rajacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c
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
