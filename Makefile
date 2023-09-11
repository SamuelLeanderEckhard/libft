# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:56:45 by seckhard          #+#    #+#              #
#    Updated: 2023/09/11 15:44:15 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c 
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
			
OBJECTS = $(SOURCES:.c=.o)

BONUS = 

BONUS_OBJECTS = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a 

all: $(NAME)

$(NAME): $(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

clean:
			rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re