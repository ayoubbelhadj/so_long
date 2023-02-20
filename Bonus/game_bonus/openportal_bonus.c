/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openportal_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:54:17 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

void	openportal_bonus(t_graph *data)
{
	data->cart[data->exit.y][data->exit.x] = 'O';
	mlx_clear_window(data->mlx, data->mlx_win);
	addimg_bonus(data);
}
