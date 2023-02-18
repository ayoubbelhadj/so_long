/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bottom.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:31:10 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/18 20:32:27 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	down_move(t_graph *data)
{
	char	*nb;

	data->cart[data->player.y][data->player.x] = '0';
	data->cart[data->player.y + 1][data->player.x] = 'P';
	mlx_clear_window(data->mlx, data->mlx_win);
	data->player.y += 1;
	addimg(data);
	data->move_cpt++;
	nb = ft_itoa(data->move_cpt);
	ft_putstr_fd("Down: ", 1);
	ft_putstr_fd(nb, 1);
	ft_putstr_fd("\n", 1);
	free(nb);
}

void	move_down(t_graph *data)
{
	if (data->cart[data->player.y + 1][data->player.x] != '1'
		&& data->cart[data->player.y + 1][data->player.x] != 'E')
	{
		down_move(data);
		// if (!count_coins(data))
		// 	opendor(data);
		// if (data->cart[data->player.y][data->player.x] == 'O')
		// 	succeed(data);
	}
}
