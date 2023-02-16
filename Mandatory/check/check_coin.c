/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_coin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:29:23 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 16:29:42 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_coin(t_graph *data)
{
	if (!ft_strchr(data->map, 'C'))
		ft_error("ERROR!\nThe map must contain at least 1 collectible.\n");
}
