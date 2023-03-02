# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgaudino <lgaudino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 15:14:04 by lgaudino          #+#    #+#              #
#    Updated: 2023/03/02 15:17:08 by lgaudino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_len.c ft_putarg.c ft_puts_print.c \
					ft_puts.c

OBJS			= $(SRCS:.c=.o)

INCLUDES		= ft_printf.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
AR				= ar rc

NAME			= libftprintf.a

all:			$(NAME)

%.o	: %.c
		$(CC) $(CFLAGS) -c $(SRCS)

$(NAME):		$(OBJS) $(INCLUDES)
				$(MAKE) -C libft
				cp libft/libft.a .
				mv libft.a $(NAME)
				$(AR) $(NAME) $(OBJS)

clean:
				make clean -C libft
				$(RM) $(OBJS)

fclean:			clean
				make fclean -C libft
				$(RM) $(NAME) libft.a

re:				fclean all

.PHONY:			all clean fclean re