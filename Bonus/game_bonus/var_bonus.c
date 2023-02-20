/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:06:09 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

char	**port(void)
{
	char	**t;

	t = malloc(sizeof(char *) * (9 + 1));
	t[0] = "Bonus/assets/portal/portal-0.xpm";
	t[1] = "Bonus/assets/portal/portal-1.xpm";
	t[2] = "Bonus/assets/portal/portal-2.xpm";
	t[3] = "Bonus/assets/portal/portal-3.xpm";
	t[4] = "Bonus/assets/portal/portal-4.xpm";
	t[5] = "Bonus/assets/portal/portal-5.xpm";
	t[6] = "Bonus/assets/portal/portal-6.xpm";
	t[7] = "Bonus/assets/portal/portal-7.xpm";
	t[8] = "Bonus/assets/portal/portal-8.xpm";
	t[9] = NULL;
	return (t);
}

char	**port_o(void)
{
	char	**t;

	t = malloc(sizeof(char *) * (9 + 1));
	t[0] = "Bonus/assets/portal_o/portal-0.xpm";
	t[1] = "Bonus/assets/portal_o/portal-1.xpm";
	t[2] = "Bonus/assets/portal_o/portal-2.xpm";
	t[3] = "Bonus/assets/portal_o/portal-3.xpm";
	t[4] = "Bonus/assets/portal_o/portal-4.xpm";
	t[5] = "Bonus/assets/portal_o/portal-5.xpm";
	t[6] = "Bonus/assets/portal_o/portal-6.xpm";
	t[7] = "Bonus/assets/portal_o/portal-7.xpm";
	t[8] = "Bonus/assets/portal_o/portal-8.xpm";
	t[9] = NULL;
	return (t);
}

char	**spike(void)
{
	char	**t;

	t = malloc(sizeof(char *) * (8 + 1));
	t[0] = "Bonus/assets/sprike/sprike-0.xpm";
	t[1] = "Bonus/assets/sprike/sprike-1.xpm";
	t[2] = "Bonus/assets/sprike/sprike-2.xpm";
	t[3] = "Bonus/assets/sprike/sprike-3.xpm";
	t[4] = "Bonus/assets/sprike/sprike-4.xpm";
	t[5] = "Bonus/assets/sprike/sprike-5.xpm";
	t[6] = "Bonus/assets/sprike/sprike-6.xpm";
	t[7] = "Bonus/assets/sprike/sprike-7.xpm";
	t[8] = NULL;
	return (t);
}

void	var(t_graph *data)
{
	data->p_l = port();
	data->po_l = port_o();
	data->spike = spike();
	data->move_cpt = 0;
	data->frame_s = 0;
	data->frame_p = 0;
	data->frame_e = 0;
}
