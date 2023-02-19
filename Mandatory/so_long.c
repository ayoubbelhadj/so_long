/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:10:43 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 21:14:44 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*map;

	if (ac == 2)
	{
		if (!name_check(av[1]))
		{
			fd = open(av[1], O_RDONLY);
			if (fd < 0)
				ft_error("ERROR!\nPath map name invalid.\n");
			map = read_map(fd);
			if (!map || !ft_strncmp(map, "", 1))
				ft_error("ERROR!!\nMap invalid.\n");
			game(map);
		}
	}
	return (0);
}
