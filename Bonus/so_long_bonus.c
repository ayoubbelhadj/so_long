/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:10:43 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:28:04 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long_bonus.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*map;

	if (ac == 2)
	{
		if (!name_check_bonus(av[1]))
		{
			fd = open(av[1], O_RDONLY);
			if (fd < 0)
				ft_error_bonus("ERROR!\nPath map name invalid.\n");
			map = read_map_bonus(fd);
			if (!map || !ft_strncmp_bonus(map, "", 1))
				ft_error_bonus("ERROR!!\nMap invalid.\n");
			game_bonus(map);
		}
	}
	return (0);
}
