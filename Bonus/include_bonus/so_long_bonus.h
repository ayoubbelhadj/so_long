/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:29:31 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 16:36:10 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_pos
{
	int		x;
	int		y;
}			t_pos;

typedef struct s_graph
{
	t_pos	player;
	t_pos	exit;
	char	**cart;
	char	*map;
	int		x_width;
	int		y_height;
	int		move_cpt;
	void	*mlx;
	char	*mlx_win;
	void	*wall;
	void	*floor;
	void	*p_front;
	void	*p_back;
	void	*p_left;
	void	*p_right;
	void	*stone;
	void	*sp_0;
	void	*portal;
	char	**p_l;
	char	**po_l;
	char	**spike;
	void	*p_open;
	int		frame_p;
	int		frame_s;
	int		frame_e;
	int		game_over;
}			t_graph;

/* check */
void	check_map_bonus(t_graph *data);
void	check_char_bonus(t_graph *data);
void	check_cadre_bonus(t_graph *data);
void	check_coin_bonus(t_graph *data);
void	check_exit_bonus(t_graph *data);
void	check_player_bonus(t_graph *data);
void	check_rect_bonus(t_graph *data);
void	check_path_bonus(t_graph *data, int base);

/* game */
void	game_bonus(char *map);
t_graph	*position_bonus(char **cart, t_graph *data);
int		quit_bonus(t_graph *data);
void	move_left_bonus(t_graph *data);
void	move_right_bonus(t_graph *data);
void	move_down_bonus(t_graph *data);
void	move_top_bonus(t_graph *data);
void	img_path_bonus(t_graph *data);
void	imgadd_bonus(t_graph *data, int x, int y, int base);
void	addimg_bonus(t_graph *data);
int		keys_bonus(int key, t_graph *data);
int		coins_bonus(t_graph *data);
void	openportal_bonus(t_graph *data);
void	win_bonus(t_graph *data);
int		animation(t_graph *data);
void	var(t_graph *data);
void	text(t_graph *data);

/* utils */
char	*read_map_bonus(int fd);
void	ft_error_bonus(char *msg);
int		name_check_bonus(char *name);
char	**split_map_bonus(char *map);
void	free_cart_bonus(char **p);

/* libft */
void	*ft_calloc_bonus(size_t num, size_t size);
void	ft_putstr_fd_bonus(char *s, int fd);
char	**ft_split_bonus(char const *s, char c);
char	*ft_strchr_bonus(char *s, int c);
int		ft_strcmp_bonus(char *s1, char *s2);
char	*ft_strjoin_gnl_bonus(char *s1, char *s2);
char	*ft_strjoin_bonus(char const *s1, char const *s2);
size_t	ft_strlen_bonus(const char *s);
int		ft_strncmp_bonus(const char *s1, const char *s2, size_t n);
char	*get_next_line_bonus(int fd);
int		ft_tablen_bonus(char **tab);
char	*ft_itoa_bonus(int n);
char	*ft_strdup_bonus(const char *s);
void	*ft_memcpy_bonus(void *dest, const void *src, size_t n);
void	*ft_memmove_bonus(void *dest, const void *src, size_t n);

#endif
