/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:06:35 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 20:07:32 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	floodfill_bonus(char **map, int y, int x, int base)
{
	if (map[y][x] != '0' && map[y][x] != 'P' && map[y][x] != 'C'
		&& map[y][x] != base)
		return ;
	map[y][x] = 'A';
	floodfill_bonus(map, y, x + 1, base);
	floodfill_bonus(map, y, x - 1, base);
	floodfill_bonus(map, y + 1, x, base);
	floodfill_bonus(map, y - 1, x, base);
}

static int	check_exist_bonus(char **map, int base)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == base)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_path_bonus(t_graph *data, int base)
{
	char	**map;
	int		x;
	int		y;

	map = ft_split_bonus(data->map, '\n');
	x = data->player.x;
	y = data->player.y;
	floodfill_bonus(map, y, x, base);
	if (base == 'C')
		if (check_exist_bonus(map, base))
			ft_error_bonus("ERROR!\nThere is no valid path \
to catch all collectibles.\n");
	if (base == 'E')
		if (check_exist_bonus(map, base))
			ft_error_bonus("ERROR!\nThere is no valid path to go the exit.\n");
	free_cart_bonus(map);
}
