/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:00 by abelhadj          #+#    #+#             */
/*   Updated: 2023/02/20 15:54:48 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_bonus/so_long_bonus.h"

static char	*lastline(char *str)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*line;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	while (str && str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	len = ft_strlen_bonus(&str[i++ + 1]);
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	while (str && str[i])
		line[j++] = str[i++];
	line[j] = '\0';
	free(str);
	return (line);
}

static char	*getreadline(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str && str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		line = malloc(i + 2);
	else
		line = malloc(i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (str && str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*readline(int fd, char *buff)
{
	char	*str;
	ssize_t	i;

	str = malloc(5 + 1);
	if (!str)
		return (NULL);
	i = 1;
	while (!ft_strchr_bonus(buff, '\n') && i != 0)
	{
		i = read(fd, str, 5);
		if (i == -1)
		{
			free(str);
			return (NULL);
		}
		str[i] = '\0';
		buff = ft_strjoin_gnl_bonus(buff, str);
	}
	free(str);
	return (buff);
}

char	*get_next_line_bonus(int fd)
{
	static char	*myline;
	char		*line;

	if (fd < 0)
		return (NULL);
	myline = readline(fd, myline);
	if (!myline)
		return (NULL);
	line = getreadline(myline);
	myline = lastline(myline);
	return (line);
}
