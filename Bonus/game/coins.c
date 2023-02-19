/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coins.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:51:59 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:36:15 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	coins_bonus(t_graph *data)
{
	int	i;
	int	j;
	int	cpt;

	i = 0;
	cpt = 0;
	while (data->cart[i])
	{
		j = 0;
		while (data->cart[i][j])
		{
			if (data->cart[i][j] == 'C')
				cpt++;
			j++;
		}
		i++;
	}
	return (cpt);
}
