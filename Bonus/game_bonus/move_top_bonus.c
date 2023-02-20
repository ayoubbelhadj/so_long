/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_top_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:31:39 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

void	top_move_bonus(t_graph *data)
{
	char	*nb;

	data->cart[data->player.y][data->player.x] = '0';
	data->cart[data->player.y - 1][data->player.x] = 'B';
	mlx_clear_window(data->mlx, data->mlx_win);
	data->player.y -= 1;
	addimg_bonus(data);
	data->move_cpt++;
	nb = ft_itoa_bonus(data->move_cpt);
	ft_putstr_fd_bonus("Top: ", 1);
	ft_putstr_fd_bonus(nb, 1);
	ft_putstr_fd_bonus("\n", 1);
	free(nb);
}

void	move_top_bonus(t_graph *data)
{
	if (data->cart[data->player.y - 1][data->player.x] == 'T')
	{
		imgadd_bonus(data, data->player.x * 64, data->player.y * 64, '0');
		data->player.y -= 1;
		data->game_over = 1;
	}
	else if (data->cart[data->player.y - 1][data->player.x] != '1'
		&& data->cart[data->player.y - 1][data->player.x] != 'E')
	{
		top_move_bonus(data);
		if (!coins_bonus(data))
			openportal_bonus(data);
		if (data->cart[data->player.y][data->player.x] == 'O')
			win_bonus(data);
	}
}
