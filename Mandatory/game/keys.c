/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:28:37 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/18 20:33:06 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	keys(int keyhook, t_graph *graph)
{
	if (keyhook == 123 || keyhook == 0)
		move_left(graph);
	if (keyhook == 124 || keyhook == 2)
		move_right(graph);
	if (keyhook == 125 || keyhook == 1)
		move_down(graph);
	if (keyhook == 126 || keyhook == 13)
		move_top(graph);
	if (keyhook == 53)
		quit(graph);
	return (0);
}
