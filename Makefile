# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 13:35:26 by vzamyati          #+#    #+#              #
#    Updated: 2017/11/08 17:47:25 by vzamyati         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = libft.a

SRC_FILES =	ft_putchar.c \
			ft_putendl.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isspace.c \
			ft_isprint.c \
			ft_islower.c \
			ft_isupper.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_power.c \
			ft_factorial.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_memmove.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strlcat.c \
			ft_atoi.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strsplit.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstlen.c 

OBJ = $(SRC_FILES:.c=.o)

all: $(NAME)

.c.o: $(SRC_FILES)
	@gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
