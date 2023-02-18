/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:51:44 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/18 20:34:16 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	right_move(t_graph *data)
{
	char	*nb;

	data->cart[data->player.y][data->player.x] = '0';
	data->cart[data->player.y][data->player.x + 1] = 'R';
	mlx_clear_window(data->mlx, data->mlx_win);
	data->player.x += 1;
	addimg(data);
	data->move_cpt++;
	nb = ft_itoa(data->move_cpt);
	ft_putstr_fd("Right: ", 1);
	ft_putstr_fd(nb, 1);
	ft_putstr_fd("\n", 1);
	free(nb);
}

void	move_right(t_graph *data)
{
	if (data->cart[data->player.y][data->player.x + 1] != '1'
			&& data->cart[data->player.y][data->player.x + 1] != 'E')
	{
		right_move(data);
		// if (!count_coins(data))
		// 	opendor(data);
		// if (data->cart[data->player.y][data->player.x] == 'O')
		// 	succeed(data);
	}
}
