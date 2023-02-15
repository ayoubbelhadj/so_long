/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:49:58 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/15 22:58:50 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	name_check(char *name)
{
	int		namelen;
	char	*str;

	namelen = ft_strlen(name);
	if (namelen <= 4)
		ft_error("ERROR!\nThe map name has to ended with .ber extention.\n");
	str = name + (namelen - 4);
	if (ft_strcmp(str, ".ber"))
		ft_error("ERROR!\nThe map name has to ended with .ber extention.\n");
	return (0);
}
