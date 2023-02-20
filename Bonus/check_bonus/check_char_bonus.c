/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:52 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

void	check_char_bonus(t_graph *data)
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
				&& c != 'E' && c != 'P' && c != 'T')
			{
				ft_error_bonus("ERROR!!\nThe map can be composed of only these 6 characters: \
{0,1,E,C,P,T}.\n");
			}
			j++;
		}
		i++;
	}
}
