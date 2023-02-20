/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:05:51 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

t_graph	*position_bonus(char **cart, t_graph *data)
{
	int		i;
	int		j;

	i = 0;
	while (cart[i])
	{
		j = 0;
		while (cart[i][j])
		{
			if (cart[i][j] == 'P')
			{
				data->player.x = j;
				data->player.y = i;
			}
			if (cart[i][j] == 'E')
			{
				data->exit.x = j;
				data->exit.y = i;
			}
			j++;
		}
		i++;
	}
	return (data);
}
