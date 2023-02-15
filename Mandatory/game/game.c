/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:18:49 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/15 22:58:26 by abelhadj         ###   ########.fr       */
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

void	check_map(t_graph *data)
{
	check_char(data);
}

void	game(char *map)
{
	t_graph	data;

	data.cart = split_map(map);
	if (!data.cart)
	{
		free_p(data.cart);
		ft_error("ERROR!!\nMap invalid.\n");
	}
	data = *position(data.cart, &data);
	data.map = map;
	data.x_width = ft_strlen(data.cart[0]) * 32;
	data.y_height = ft_tablen(data.cart) * 32;
	check_map(&data);
	printf("%d\n", data.x_width);
	printf("%d\n", data.y_height);
}
