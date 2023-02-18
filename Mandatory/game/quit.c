/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:48:13 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/18 18:48:54 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	quit(t_graph *graph)
{
	mlx_destroy_window(graph->mlx, graph->mlx_win);
	exit(0);
	return (0);
}
