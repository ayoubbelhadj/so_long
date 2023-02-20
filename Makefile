# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 17:59:44 by abelhadj          #+#    #+#              #
#    Updated: 2023/02/20 16:43:22 by abelhadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
NAME_B	= so_long_bonus

CC		= cc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf
FRAMEWORKS = -lmlx -framework OpenGL -framework AppKit

LIBFT	= $(addprefix libft/, ft_itoa ft_calloc ft_putstr_fd ft_strcmp ft_strchr ft_strlen ft_strjoin_gnl ft_strjoin \
			ft_strncmp get_next_line ft_split ft_tablen ft_memmove ft_memcpy ft_strdup)
UTILS	= $(addprefix utils/, ft_error name_check read_map split_map free_cart)
GAME	= $(addprefix game/, game position quit img keys move_left move_right move_down move_top coins openportal win)
CHECK	= $(addprefix check/, check_map check_char check_cadre check_coin check_exit check_player check_rect check_path)
FILES	= $(addprefix Mandatory/, so_long $(LIBFT) $(UTILS) $(CHECK) $(GAME))

LIBFT_B	= $(addprefix libft_bonus/, ft_itoa ft_calloc ft_putstr_fd ft_strcmp ft_strchr ft_strlen ft_strjoin_gnl ft_strjoin \
			ft_strncmp get_next_line ft_split ft_tablen ft_memmove ft_memcpy ft_strdup)
UTILS_B	= $(addprefix utils_bonus/, ft_error name_check read_map split_map free_cart)
GAME_B	= $(addprefix game_bonus/, game position quit img keys move_left move_right move_down move_top coins openportal win animation var text)
CHECK_B	= $(addprefix check_bonus/, check_map check_char check_cadre check_coin check_exit check_player check_rect check_path)
FILES_B	= $(addprefix Bonus/, so_long $(LIBFT_B) $(UTILS_B) $(CHECK_B) $(GAME_B))

SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
HEADER  = Mandatory/include/so_long.h
INCLUDES= -I include

SRC_B	= $(FILES_B:=_bonus.c)
OBJ_B	= $(FILES_B:=_bonus.o)
HEADER_B= Bonus/include_bonus/so_long_bonus.h
INCLUDES_B= -I include_bonus

GREEN		=	\e[92;5;118m
RED			=	\e[0;31m
GRAY		=	\e[33;2;37m
CURSIVE		=	\e[33;3m
RESET		=	\e[0m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@printf "$(CURSIVE)$(GRAY)	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(OBJ) $(INCLUDES) $(FRAMEWORKS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@$(CC) $(FLAGS) $(INCLUDES)  -c $< -o $@ 

%_bonus.o: %_bonus.c $(HEADER_B)
	@$(CC) $(FLAGS) $(INCLUDES_B)  -c $< -o $@ 

bonus: $(NAME_B)

$(NAME_B): $(OBJ_B) $(HEADER_B)
	@printf "$(CURSIVE)$(GRAY)	- Compiling $(NAME_B)... $(RESET)\n"
	@$(CC) $(OBJ_B) $(INCLUDES_B) $(FRAMEWORKS) -o $(NAME_B)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"
	
clean:
	@$(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(RED)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(RED)    - Executable removed.$(RESET)\n"

bclean:
	@$(RM) $(OBJ_B)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(RED)    - Object files removed.$(RESET)\n"

bfclean: bclean
	@$(RM) $(NAME_B)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME_B)... $(RESET)\n"
	@printf "$(RED)    - Executable removed.$(RESET)\n"

re: fclean all

re_b: bfclean bonus

fc: fclean bfclean

mb: $(NAME) $(NAME_B)

.PHONY: all clean fclean re bonus bfclean bclean re_b fall mb