/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:29:31 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 16:34:33 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

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
	void	*portal;
	void	*portal_open;
}			t_graph;

/* check */
void	check_map(t_graph *data);
void	check_char(t_graph *data);
void	check_cadre(t_graph *data);
void	check_coin(t_graph *data);
void	check_exit(t_graph *data);
void	check_player(t_graph *data);
void	check_rect(t_graph *data);
void	check_path(t_graph *data, int base);

/* game */
void	game(char *map);
t_graph	*position(char **cart, t_graph *data);
int		quit(t_graph *data);
void	move_left(t_graph *data);
void	move_right(t_graph *data);
void	move_down(t_graph *data);
void	move_top(t_graph *data);
void	img_path(t_graph *data);
void	imgadd(t_graph *data, int x, int y, int base);
void	addimg(t_graph *data);
int		keys(int key, t_graph *data);
int		coins(t_graph *data);
void	openportal(t_graph *data);
void	win(t_graph *data);

/* utils */
char	*read_map(int fd);
void	ft_error(char *msg);
int		name_check(char *name);
char	**split_map(char *map);
void	free_cart(char **p);

/* libft */
void	*ft_calloc(size_t num, size_t size);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*get_next_line(int fd);
int		ft_tablen(char **tab);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
