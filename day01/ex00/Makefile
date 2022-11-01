# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:54:18 by bpoetess          #+#    #+#              #
#    Updated: 2022/10/31 18:37:43 by bpoetess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	zombies

CC					=	c++
FLAGS				=	-Wall -Wextra -Werror -std=c++98
INCLUDES			=	-I$(HEADERS)

HEADERS_LIST		=	Zombie.hpp
HEADERS_DIR			=	./include/
HEADERS				=	$(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SOURCES_DIR			=	./sources/
SOURCES_LIST		=	Zombie.cpp	main.cpp	newZombie.cpp	randomChump.cpp

SOURCES				=	$(addprefix $(SOURCES_DIR), $(SOURCES_LIST))


OBJECTS_DIR			=	objects/
OBJECTS_LIST		=	$(patsubst %.cpp, %.o, $(SOURCES_LIST))
OBJECTS				=	$(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))

all					:	$(NAME)

$(NAME)				:	$(OBJECTS_DIR) $(OBJECTS)
							$(CC) $(FLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)
					
$(OBJECTS_DIR)		:
					@mkdir -p $(OBJECTS_DIR)

$(OBJECTS_DIR)%.o	: $(SOURCES_DIR)%.cpp $(HEADERS)
					@$(CC) $(FLAGS) -c  $(INCLUDES) $< -o $@

clean				:
					@rm -rf $(OBJECTS_DIR)

fclean				: clean
					@rm -f $(NAME)

re					:
					@$(MAKE) fclean
					@$(MAKE) all

.PHONY				:	all clean fclean re