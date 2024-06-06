# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skomatsu <komatsu@student.42tokyo.jp>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 20:03:35 by skomatsu          #+#    #+#              #
#    Updated: 2024/06/06 18:18:22 by skomatsu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
SRC_DIR = .
INC_DIR = .
SRCS 	= ft_isalpha.c \
    	  ft_isdigit.c \
          ft_isalnum.c \
          ft_isascii.c \
          ft_isprint.c \
    	  ft_strlen.c \
    	  ft_memset.c \
          ft_bzero.c \
    	  ft_memcpy.c \
    	  ft_memmove.c \
          ft_strlcpy.c \
          ft_strlcat.c \
          ft_calloc.c \
          ft_strdup.c \
    	  ft_toupper.c \
          ft_tolower.c \
          ft_strchr.c \
          ft_strncmp.c \
          ft_memchr.c \
          ft_memcmp.c \
          ft_strnstr.c \
          ft_atoi.c \
          ft_strrchr.c \
          ft_substr.c \
          ft_strjoin.c \
          ft_strtrim.c \
          ft_split.c \
          ft_itoa.c \
          ft_strmapi.c \
          ft_striteri.c \
          ft_putchar_fd.c \
          ft_putstr_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re
