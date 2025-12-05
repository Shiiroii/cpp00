# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/22 14:13:52 by lionelulm         #+#    #+#              #
#    Updated: 2025/12/05 16:47:29 by lionelulm        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CPP = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Account.cpp		\
		tests.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
