/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:35:24 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/19 21:42:23 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

char	*ft_strjoin_bonus(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen_bonus(s1) + ft_strlen_bonus(s2);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy_bonus(str, s1, ft_strlen_bonus(s1));
	ft_memcpy_bonus(str + ft_strlen_bonus(s1), s2, ft_strlen_bonus(s2));
	str[len] = '\0';
	return (str);
}
