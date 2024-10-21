# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 19:58:17 by akuburas          #+#    #+#              #
#    Updated: 2024/10/21 19:59:17 by akuburas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++11 -g

NAME = exercise00

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
