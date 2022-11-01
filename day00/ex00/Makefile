# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 16:43:35 by bpoetess          #+#    #+#              #
#    Updated: 2022/10/28 16:50:50 by bpoetess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	megaphone

CC					=	c++
FLAGS				=	-Wall -Wextra -Werror -std=c++98

SOURCES				=	megaphone.cpp

OBJECTS_DIR			=	objects/
OBJECTS_LIST		=	$(patsubst %.cpp, %.o, $(SOURCES))
OBJECTS				=	$(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))

all					:	$(NAME)

$(NAME)				:	$(OBJECTS_DIR) $(OBJECTS)
					$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIR)		:
					@mkdir -p $(OBJECTS_DIR)

$(OBJECTS_DIR)%.o	: $(SOURCES)
					@$(CC) $(FLAGS) -c $< -o $@

clean				:
					@rm -rf $(OBJECTS_DIR)

fclean				: clean
					@rm -f $(NAME)

re					:
					@$(MAKE) fclean
					@$(MAKE) all

.PHONY				:	all clean fclean re