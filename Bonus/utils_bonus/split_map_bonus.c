/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_map_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:12:08 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

char	**split_map_bonus(char *map)
{
	char	**p;

	if (!map)
		return (0);
	p = ft_split_bonus(map, '\n');
	return (p);
}
