/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:06:35 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:43:24 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	check_rect_bonus(t_graph *data)
{
	int	i;

	i = 0;
	while (data->cart[i] && data->cart[i + 1])
	{
		if (ft_strlen_bonus(data->cart[i])
			!= ft_strlen_bonus(data->cart[i + 1]))
			ft_error_bonus("ERROR!\nThe map must be rectangular.\n");
		i++;
	}
}
