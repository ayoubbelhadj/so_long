/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:18:49 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

void	game_bonus(char *map)
{
	t_graph	data;

	data.cart = split_map_bonus(map);
	if (!data.cart)
	{
		free_cart_bonus(data.cart);
		ft_error_bonus("ERROR!!\nMap invalid.\n");
	}
	data = *position_bonus(data.cart, &data);
	data.map = map;
	data.x_width = ft_strlen_bonus(data.cart[0]) * 64;
	data.y_height = ft_tablen_bonus(data.cart) * 64;
	check_map_bonus(&data);
	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx, data.x_width, data.y_height,
			"so_long");
	img_path_bonus(&data);
	addimg_bonus(&data);
	var(&data);
	mlx_hook(data.mlx_win, 2, 0, keys_bonus, &data);
	mlx_loop_hook(data.mlx, animation, &data);
	mlx_hook(data.mlx_win, 17, 0, quit_bonus, &data);
	mlx_loop(data.mlx);
}
