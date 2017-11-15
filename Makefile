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

SRC_DIR = src/
INCLUDE_DIR = includes/

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
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
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

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(SRC:.c=.o)

MAIN = ./main.c

all: $(NAME)

.c.o: $(SRC)
	gcc $(FLAGS) -I $(INCLUDE_DIR) -c $< -o $@

$(NAME): $(OBJ)
	# gcc $(FLAGS) -I $(INCLUDE_DIR) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	# !!!!!!!!!!!!!!!
	gcc $(FLAGS) $(MAIN) -I $(INCLUDE_DIR) -L . -lft

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
