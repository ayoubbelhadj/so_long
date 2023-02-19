/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_coin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:29:23 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 19:35:08 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	check_coin_bonus(t_graph *data)
{
	if (!ft_strchr_bonus(data->map, 'C'))
		ft_error_bonus("ERROR!\nThe map must contain at least 1 collectible.\n");
}
