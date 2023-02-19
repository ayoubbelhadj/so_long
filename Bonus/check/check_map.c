/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:04 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 20:09:31 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	check_map_bonus(t_graph *data)
{
	check_char_bonus(data);
	check_cadre_bonus(data);
	check_coin_bonus(data);
	check_exit_bonus(data);
	check_player_bonus(data);
	check_rect_bonus(data);
	check_path_bonus(data, 'C');
	check_path_bonus(data, 'E');
}
