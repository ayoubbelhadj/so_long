/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:28:37 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

int	keys_bonus(int key, t_graph *data)
{
	if (key == 123 || key == 0)
		move_left_bonus(data);
	if (key == 124 || key == 2)
		move_right_bonus(data);
	if (key == 125 || key == 1)
		move_down_bonus(data);
	if (key == 126 || key == 13)
		move_top_bonus(data);
	if (key == 53)
		quit_bonus(data);
	if (data->game_over == 1)
	{
		ft_putstr_fd_bonus("--YOU HAVE LOSE--\n", 2);
		quit_bonus(data);
	}
	return (0);
}
