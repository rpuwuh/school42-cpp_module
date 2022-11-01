# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:54:18 by bpoetess          #+#    #+#              #
#    Updated: 2022/11/01 18:59:42 by bpoetess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S		= sources/
O		= objects/
I		= include/

NAME	= violence

SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC		= c++
CFLAGS	+= -Wall -Wextra -Werror -std=c++98
LDFLAGS	+= 

CFLAGS	+= -I$I

SRCS	:= $(foreach file,$(SRCS),$S$(file))
OBJS	= $(SRCS:$S%=$O%.o)
DEPS	= $(SRCS:$S%=$D%.d)

RM		= /bin/rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$O:
	@mkdir $@

$(OBJS): | $O

$(OBJS): $O%.o: $S%
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	@$(RM) $D $O

fclean: clean
	@$(RM) $(NAME)

re: fclean all
