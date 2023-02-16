/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:52 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 16:10:05 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_char(t_graph *data)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	i = 0;
	while (data->cart[i])
	{
		j = 0;
		while (data->cart[i][j])
		{
			c = data->cart[i][j];
			if (c != '0' && c != '1' && c != 'C'
				&& c != 'E' && c != 'P')
			{
				ft_error("ERROR!!\nThe map can be composed of only these 5 characters: \
{0,1,E,C,P}.\n");
			}
			j++;
		}
		i++;
	}
}
