/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:36:17 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

char	*ft_strdup_bonus(const char *s)
{
	char	*d;
	size_t	len;

	len = ft_strlen_bonus(s);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	ft_memmove_bonus(d, s, len + 1);
	return (d);
}
