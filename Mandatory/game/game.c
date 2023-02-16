/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:18:49 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 18:36:34 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
#include <mlx.h>

void	game(char *map)
{
	t_graph	data;

	data.cart = split_map(map);
	if (!data.cart)
	{
		free_p(data.cart);
		ft_error("ERROR!!\nMap invalid.\n");
	}
	data = *position(data.cart, &data);
	data.map = map;
	data.x_width = ft_strlen(data.cart[0]) * 64;
	data.y_height = ft_tablen(data.cart) * 64;
	check_map(&data);
	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx, data.x_width, data.y_height,
			"so_long");
	mlx_loop(data.mlx);
}
