# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 22:10:10 by lbastien          #+#    #+#              #
#    Updated: 2023/01/23 19:11:00 by lbastien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Standard variables

SERVER		=	server
CLIENT		=	client
SRC_DIR		=	src
OBJ_DIR		=	obj
INCLUDE_DIR	= 	include
PRINTF		=	ft_printf/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f
AR			=	ar rcs

#Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources

SRC_SERVER	= 	$(SRC_DIR)/$(SERVER).c
SRC_CLIENT	= 	$(SRC_DIR)/$(CLIENT).c
OBJ_SERVER = 	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_SERVER))
OBJ_CLIENT = 	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_CLIENT))

#exe

OBJ_F		=	.cache_exists

all:		$(CLIENT) $(SERVER) $(OBJ_DIR)

$(CLIENT):	$(OBJ_CLIENT)
			@make -C $(PRINTF)
			@$(CC) $(CFLAGS) -o $(CLIENT) $(OBJ_CLIENT) $(PRINTF)libftprintf.a
			@echo "$(GREEN)Client compiled!$(DEF_COLOR)"

$(SERVER): $(OBJ_SERVER)
			@$(CC) $(CFLAGS) -o $(SERVER) $(OBJ_SERVER) $(PRINTF)libftprintf.a
			@echo "$(GREEN)Server compiled!$(DEF_COLOR)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
			@mkdir -p $(OBJ_DIR)
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@make clean -C $(PRINTF)
			@RM -rf $(OBJ_DIR)
			@echo "$(BLUE)Objects files cleaned!$(DEF_COLOR)"

fclean:		clean
			@$(RM) $(SERVER)
			@$(RM) $(CLIENT)
			@make fclean -C $(PRINTF)
			@echo "$(CYAN)Executable files cleaned!$(DEF_COLOR)"

re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything!$(DEF_COLOR)"

norm:
			@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY: all, clean, fclean, re, norm, out
