/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:12:08 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:28:20 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

char	**split_map_bonus(char *map)
{
	char	**p;

	if (!map)
		return (0);
	p = ft_split_bonus(map, '\n');
	return (p);
}
