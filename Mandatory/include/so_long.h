/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:29:31 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 17:57:48 by abelhadj         ###   ########.fr       */
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
	void	*mlx;
	char	*mlx_win;
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

/* utils */
char	*read_map(int fd);
void	ft_error(char *msg);
int		name_check(char *name);
char	**split_map(char *map);
void	free_p(char **p);

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


#endif
