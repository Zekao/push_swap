# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 20:40:06 by emaugale          #+#    #+#              #
#    Updated: 2021/12/07 13:28:40 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	srcs/push_swap_utils.c			\
		srcs/push_operators.c			\
		srcs/swap_operators.c			\
		srcs/rotate_operators.c			\
		srcs/reverse_rotate_operators.c	\
		srcs/test_main.c				\
		srcs/check_list.c				\
		srcs/ft_split.c					\
		srcs/hardcode_sort.c			\

BONUS = 

OBJS := ${SRCS:.c=.o}

BONUSOBJS := ${BONUS:.c=.o}

CC = gcc

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: $(NAME)
	@echo "\033[1;34m Bonne correction !\n"

$(NAME): ${OBJS}
	gcc -o $(NAME) ${OBJS}

clean: 
	@${RM} ${OBJS} ${BONUSOBJS}
	@echo "\033[1;31m ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣶⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣄⣀⡀⣠⣾⡇⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⢿⣿⣿⡇⠀⠀⠀⠀"
	@echo "⠀⣶⣿⣦⣜⣿⣿⣿⡟⠻⣿⣿⣿⣿⣿⣿⣿⡿⢿⡏⣴⣺⣦⣙⣿⣷⣄⠀⠀⠀\033[1;34m Goodbye everyone\033[1;31m"
	@echo "⠀⣯⡇⣻⣿⣿⣿⣿⣷⣾⣿⣬⣥⣭⣽⣿⣿⣧⣼⡇⣯⣇⣹⣿⣿⣿⣿⣧⠀⠀"
	@echo "⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠸⣿⣿⣿⣿⣿⣿⣿⣷⠀"
	@echo "\033[1;32m Objects have been deleted"
fclean: clean
	@${RM} $(NAME) 
	@echo " ${NAME} have been deleted"

re: fclean all

.PHONY: all clean fclean re 
