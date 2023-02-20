/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:17:12 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

void	text(t_graph *data)
{
	char	*s;
	char	*p;

	p = ft_itoa_bonus(data->move_cpt);
	s = ft_strjoin_bonus("Move : ", p);
	mlx_string_put(data->mlx, data->mlx_win, 5, 5, 0xFFFFFF, s);
	free(p);
	free (s);
}
