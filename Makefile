# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanghlee <sanghlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/20 03:19:46 by sanghlee          #+#    #+#              #
#    Updated: 2021/02/23 19:19:02 by sanghlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SRCS = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_strrchr \

BONUS = ft_lstnew \
		  ft_lstadd_front \
		  ft_lstsize \
		  ft_lstlast \
		  ft_lstadd_back \
		  ft_lstdelone \
		  ft_lstclear \
		  ft_lstiter \
		  ft_lstmap

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
