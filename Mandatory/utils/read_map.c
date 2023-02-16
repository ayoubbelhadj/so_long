/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:14:54 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 15:40:14 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	*read_map(int fd)
{
	char	*buff;
	char	*map;
	char	*tmp;

	map = ft_calloc(1, 1);
	while (1)
	{
		buff = get_next_line(fd);
		if (!buff)
			break ;
		if (ft_strlen(buff) <= 1)
			ft_error("ERROR!\nEmpty line in map.\n");
		tmp = map;
		free(map);
		map = ft_strjoin(tmp, buff);
		free(buff);
	}
	return (map);
}
