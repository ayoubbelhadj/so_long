/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:31:39 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:10:38 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	top_move(t_graph *data)
{
	char	*nb;

	data->cart[data->player.y][data->player.x] = '0';
	data->cart[data->player.y - 1][data->player.x] = 'B';
	mlx_clear_window(data->mlx, data->mlx_win);
	data->player.y -= 1;
	addimg(data);
	data->move_cpt++;
	nb = ft_itoa(data->move_cpt);
	ft_putstr_fd("Top: ", 1);
	ft_putstr_fd(nb, 1);
	ft_putstr_fd("\n", 1);
	free(nb);
}

void	move_top(t_graph *data)
{
	if (data->cart[data->player.y - 1][data->player.x] != '1'
		&& data->cart[data->player.y - 1][data->player.x] != 'E')
	{
		top_move(data);
		if (!coins(data))
			openportal(data);
		if (data->cart[data->player.y][data->player.x] == 'O')
			win(data);
	}
}
