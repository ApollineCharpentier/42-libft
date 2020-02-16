# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/13 15:46:39 by apcharpe          #+#    #+#              #
#    Updated: 2020/02/16 15:58:04 by apcharpe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c \
	 ft_bzero.c \
	 ft_calloc.c \
	 ft_isalnum.c \
	 ft_isalpha.c \
	 ft_isascii.c \
	 ft_isdigit.c \
	 ft_isprint.c \
	 ft_itoa.c \
	 ft_memccpy.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memcpy.c \
	 ft_memmove.c \
	 ft_memset.c \
	 ft_putchar_fd.c \
	 ft_putendl_fd.c \
	 ft_putnbr_fd.c \
	 ft_putstr_fd.c \
	 ft_split.c \
	 ft_strchr.c \
	 ft_strdup.c \
	 ft_strjoin.c \
	 ft_strlcat.c \
	 ft_strlcpy.c \
	 ft_strlen.c \
	 ft_strmapi.c \
	 ft_strncmp.c \
	 ft_strnstr.c \
	 ft_strrchr.c \
	 ft_strtrim.c \
	 ft_substr.c \
	 ft_tolower.c \
	 ft_toupper.c \


INCL = libft.h

OBJS = $(SRCS:.c=.o)


all:	$(NAME)

%.o:		%.c
		$(CC) -o $@ -c $< $(CFLAGS) -I $(INCL)

$(NAME):	$(OBJS)
		ar rc $(NAME) $^
		ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
