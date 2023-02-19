/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:07:32 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 22:19:26 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	animestone(t_graph *data)
{
	int	w;

	if (data->frame_s == 8)
	{
		data->stone = mlx_xpm_file_to_image(data->mlx,
				"Bonus/assets/stone/stone-0.xpm", &w, &w);
	}
	else if (data->frame_s == 16)
	{
		data->stone = mlx_xpm_file_to_image(data->mlx,
				"Bonus/assets/stone/stone-1.xpm", &w, &w);
	}
	else if (data->frame_s == 24)
	{
		data->stone = mlx_xpm_file_to_image(data->mlx,
				"Bonus/assets/stone/stone-2.xpm", &w, &w);
	}
	else if (data->frame_s == 32)
	{
		data->stone = mlx_xpm_file_to_image(data->mlx,
				"Bonus/assets/stone/stone-3.xpm", &w, &w);
	}
	if (data->frame_s == 32)
		data->frame_s = -1;
}

void	animeportal(t_graph *data)
{
	int	w;

	if (data->frame_p == 3)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[0], &w, &w);
	else if (data->frame_p == 6)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[1], &w, &w);
	else if (data->frame_p == 9)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[2], &w, &w);
	else if (data->frame_p == 12)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[3], &w, &w);
	else if (data->frame_p == 15)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[4], &w, &w);
	else if (data->frame_p == 18)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[5], &w, &w);
	else if (data->frame_p == 21)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[6], &w, &w);
	else if (data->frame_p == 24)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[7], &w, &w);
	else if (data->frame_p == 27)
		data->portal = mlx_xpm_file_to_image(data->mlx, data->p_l[8], &w, &w);
	if (data->frame_p == 27)
		data->frame_p = -1;
}

void	animeportal_o(t_graph *data)
{
	int	w;

	if (data->frame_p == 3)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[0], &w, &w);
	else if (data->frame_p == 6)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[1], &w, &w);
	else if (data->frame_p == 9)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[2], &w, &w);
	else if (data->frame_p == 12)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[3], &w, &w);
	else if (data->frame_p == 15)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[4], &w, &w);
	else if (data->frame_p == 18)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[5], &w, &w);
	else if (data->frame_p == 21)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[6], &w, &w);
	else if (data->frame_p == 24)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[7], &w, &w);
	else if (data->frame_p == 27)
		data->p_open = mlx_xpm_file_to_image(data->mlx, data->po_l[8], &w, &w);
	if (data->frame_p == 27)
		data->frame_p = -1;
}

void	animespike(t_graph *data)
{
	int	w;

	if (data->frame_e == 20)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[0], &w, &w);
	else if (data->frame_e == 30)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[1], &w, &w);
	else if (data->frame_e == 40)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[2], &w, &w);
	else if (data->frame_e == 50)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[3], &w, &w);
	else if (data->frame_e == 60)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[4], &w, &w);
	else if (data->frame_e == 70)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[5], &w, &w);
	else if (data->frame_e == 120)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[6], &w, &w);
	else if (data->frame_e == 130)
		data->sp_0 = mlx_xpm_file_to_image(data->mlx, data->spike[7], &w, &w);
	if (data->frame_e == 130)
		data->frame_e = -1;
}

int	animation(t_graph *data)
{
	animeportal(data);
	animeportal_o(data);
	animestone(data);
	animespike(data);
	data->frame_s += 1;
	data->frame_p += 1;
	data->frame_e += 1;
	mlx_clear_window(data->mlx, data->mlx_win);
	addimg_bonus(data);
	text(data);
	return (0);
}
