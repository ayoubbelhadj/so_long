/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:58:37 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

void	img_path_bonus(t_graph *data)
{
	int	w;

	data->wall = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/wall.xpm", &w, &w);
	data->floor = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/floor.xpm", &w, &w);
	data->stone = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/stone/stone-0.xpm", &w, &w);
	data->p_front = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/player/P_front.xpm", &w, &w);
	data->p_right = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/player/P_right.xpm", &w, &w);
	data->p_left = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/player/P_left.xpm", &w, &w);
	data->p_back = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/player/P_back.xpm", &w, &w);
	data->portal = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/portal/portal-0.xpm", &w, &w);
	data->p_open = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/portal_o/portal-0.xpm", &w, &w);
	data->sp_0 = mlx_xpm_file_to_image(data->mlx,
			"Bonus/assets/sprike/sprike-0.xpm", &w, &w);
}

void	imgadd_bonus(t_graph *data, int x, int y, int base)
{
	if (base == '1')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->wall, x, y);
	else if (base == 'C')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->stone, x, y);
	else if (base == 'P')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->p_front, x, y);
	else if (base == 'E')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->portal, x, y);
	else if (base == 'L')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->p_left, x, y);
	else if (base == 'R')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->p_right, x, y);
	else if (base == '0')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->floor, x, y);
	else if (base == 'B')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->p_back, x, y);
	else if (base == 'O')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->p_open, x, y);
	else if (base == 'T')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->sp_0, x, y);
}

void	addimg_bonus(t_graph *data)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	y = 0;
	mlx_clear_window(data->mlx, data->mlx_win);
	while (data->cart[i])
	{
		j = 0;
		x = 0;
		while (data->cart[i][j])
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win,
				data->floor, x, y);
			imgadd_bonus(data, x, y, data->cart[i][j]);
			x += 64;
			j++;
		}
		y += 64;
		i++;
	}
}
