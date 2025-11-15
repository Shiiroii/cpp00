# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 12:34:31 by liulm             #+#    #+#              #
#    Updated: 2025/11/15 12:29:53 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CPP = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Contact.cpp		\
		PhoneBook.cpp

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
