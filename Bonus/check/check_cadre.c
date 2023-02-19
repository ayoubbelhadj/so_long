/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cadre.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:10:28 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:41:17 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

static int	check_x_bonus(t_graph *data, int line)
{
	int	i;

	i = 0;
	while (data->cart[line][i])
	{
		if (data->cart[line][i] != '1')
			return (1);
		i++;
	}
	return (0);
}

static int	check_y_bonus(t_graph *data)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (data->cart[i])
	{
		len = ft_strlen_bonus(data->cart[i]) - 1;
		if (data->cart[i][0] && (data->cart[i][0] != '1'
			|| data->cart[i][len] != '1'))
			return (1);
		i++;
	}
	return (0);
}

void	check_cadre_bonus(t_graph *data)
{
	int	len;

	len = ft_tablen_bonus(data->cart) - 1;
	if (check_x_bonus(data, 0) || check_x_bonus(data, len)
		|| check_y_bonus(data))
		ft_error_bonus("ERROR!\nThe map has to be closed.\n");
}
