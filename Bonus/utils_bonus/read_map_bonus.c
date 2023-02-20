/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:14:54 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

char	*read_map_bonus(int fd)
{
	char	*buff;
	char	*map;
	char	*tmp;

	map = ft_calloc_bonus(1, 1);
	while (1)
	{
		buff = get_next_line_bonus(fd);
		if (!buff)
			break ;
		if (ft_strlen_bonus(buff) <= 1)
			ft_error_bonus("ERROR!\nEmpty line in map.\n");
		tmp = ft_strdup_bonus(map);
		free(map);
		map = ft_strjoin_bonus(tmp, buff);
		free(tmp);
		free(buff);
	}
	return (map);
}
