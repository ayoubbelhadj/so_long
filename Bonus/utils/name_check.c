/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:49:58 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:31:57 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	name_check_bonus(char *name)
{
	int		namelen;
	char	*str;

	namelen = ft_strlen_bonus(name);
	if (namelen <= 4)
		ft_error_bonus("ERROR!\nThe map name has to ended with \
		.ber extention.\n");
	str = name + (namelen - 4);
	if (ft_strcmp_bonus(str, ".ber"))
		ft_error_bonus("ERROR!\nThe map name has to ended with \
		.ber extention.\n");
	return (0);
}
