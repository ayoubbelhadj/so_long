# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 17:59:44 by abelhadj          #+#    #+#              #
#    Updated: 2023/02/16 18:19:48 by abelhadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long

CC		= cc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

LIBFT	= $(addprefix libft/, ft_calloc ft_putstr_fd ft_strcmp ft_strchr ft_strlen ft_strjoin_gnl ft_strjoin \
			ft_strncmp get_next_line ft_split ft_tablen)
UTILS	= $(addprefix utils/, ft_error name_check read_map split_map free_p)
GAME	= $(addprefix game/, game position)
CHECK	= $(addprefix check/, check_map check_char check_cadre check_coin check_exit check_player check_rect check_path)

FILES	= $(addprefix Mandatory/, so_long $(LIBFT) $(UTILS) $(CHECK) $(GAME))

SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
HEADER  = Mandatory/include/so_long.h
INCLUDES= -I include

GREEN		=	\e[92;5;118m
RED			=	\e[0;31m
GRAY		=	\e[33;2;37m
CURSIVE		=	\e[33;3m
RESET		=	\e[0m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@printf "$(CURSIVE)$(GRAY)	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(OBJ) $(INCLUDES) -lmlx -framework OpenGL -framework AppKit  -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER) $(HEADER_B)
	@$(CC) $(FLAGS) -Imlx $(INCLUDES)  -c $< -o $@ 


clean:
	@$(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(RED)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(RED)    - Executable removed.$(RESET)\n"

re: fclean all


.PHONY: all clean fclean re 