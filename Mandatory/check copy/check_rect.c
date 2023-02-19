/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:06:35 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 17:10:09 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_rect(t_graph *data)
{
	int	i;

	i = 0;
	while (data->cart[i] && data->cart[i + 1])
	{
		if (ft_strlen(data->cart[i]) != ft_strlen(data->cart[i + 1]))
			ft_error("ERROR!\nThe map must be rectangular.\n");
		i++;
	}
}
