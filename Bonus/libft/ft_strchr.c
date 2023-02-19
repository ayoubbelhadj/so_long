/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:55:45 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 15:34:33 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

char	*ft_strchr_bonus(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if (*s == (char)c)
		return (s);
	return (NULL);
}
