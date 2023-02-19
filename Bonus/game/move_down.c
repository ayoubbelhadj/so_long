/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:31:10 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 20:25:16 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	down_move_bonus(t_graph *data)
{
	char	*nb;

	data->cart[data->player.y][data->player.x] = '0';
	data->cart[data->player.y + 1][data->player.x] = 'P';
	mlx_clear_window(data->mlx, data->mlx_win);
	data->player.y += 1;
	addimg_bonus(data);
	data->move_cpt++;
	nb = ft_itoa_bonus(data->move_cpt);
	ft_putstr_fd_bonus("Down: ", 1);
	ft_putstr_fd_bonus(nb, 1);
	ft_putstr_fd_bonus("\n", 1);
	free(nb);
}

void	move_down_bonus(t_graph *data)
{
	if (data->cart[data->player.y + 1][data->player.x] == 'T')
	{
		imgadd_bonus(data, data->player.x * 64, data->player.y * 64, '0');
		data->player.y += 1;
		data->game_over = 1;
	}
	else if (data->cart[data->player.y + 1][data->player.x] != '1'
		&& data->cart[data->player.y + 1][data->player.x] != 'E')
	{
		down_move_bonus(data);
		if (!coins_bonus(data))
			openportal_bonus(data);
		if (data->cart[data->player.y][data->player.x] == 'O')
			win_bonus(data);
	}
}
