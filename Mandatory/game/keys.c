/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:28:37 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:24:39 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	keys(int key, t_graph *data)
{
	if (key == 123 || key == 0)
		move_left(data);
	if (key == 124 || key == 2)
		move_right(data);
	if (key == 125 || key == 1)
		move_down(data);
	if (key == 126 || key == 13)
		move_top(data);
	if (key == 53)
		quit(data);
	return (0);
}
