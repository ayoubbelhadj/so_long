/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:57:29 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 21:52:30 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	left_move(t_graph *data)
{
	char	*nb;

	data->cart[data->player.y][data->player.x] = '0';
	data->cart[data->player.y][data->player.x - 1] = 'L';
	mlx_clear_window(data->mlx, data->mlx_win);
	data->player.x -= 1;
	addimg(data);
	data->move_cpt++;
	nb = ft_itoa(data->move_cpt);
	ft_putstr_fd("Left: ", 1);
	ft_putstr_fd(nb, 1);
	ft_putstr_fd("\n", 1);
	free(nb);
}

void	move_left(t_graph *data)
{
	if (data->cart[data->player.y][data->player.x - 1] != '1'
			&& data->cart[data->player.y][data->player.x - 1] != 'E')
	{
		left_move(data);
		if (!coins(data))
			openportal(data);
		if (data->cart[data->player.y][data->player.x] == 'O')
			win(data);
	}
}
