/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:04 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/16 17:16:22 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_map(t_graph *data)
{
	check_char(data);
	check_cadre(data);
	check_coin(data);
	check_exit(data);
	check_player(data);
	check_rect(data);
	check_path(data, 'C');
	check_path(data, 'E');
}
