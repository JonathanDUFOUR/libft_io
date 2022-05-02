/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 23:55:24 by jodufour          #+#    #+#             */
/*   Updated: 2022/05/02 17:18:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "buffer.h"

int	indexof(char const *str, char const c)
{
	int	idx;

	idx = 0;
	while (str && str[idx] && str[idx] != c)
		++idx;
	return (idx);
}

char	*gnl_concat(char const *s0, char const *s1, int const n)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = indexof(s0, 0) + indexof(s1, 0);
	if (len > n && n >= 0)
		len = n;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = 0;
	while (s0 && *s0 && i < len)
		res[i++] = *s0++;
	while (s1 && *s1 && i < len)
		res[i++] = *s1++;
	return (res);
}

static int	gnl_read(int const fd, char **rest, char **tmp, int *len)
{
	char	buff[BUFF_SIZE + 1];
	int		rd;

	rd = 0;
	while (*len == indexof(*rest, 0))
	{
		rd = read(fd, buff, BUFF_SIZE);
		if (rd < 0)
			return (-1);
		if (rd == 0)
			break ;
		buff[rd] = 0;
		*tmp = gnl_concat(*rest, buff, -1);
		if (!*tmp)
			return (-1);
		free(*rest);
		*rest = *tmp;
		*len = indexof(*rest, '\n');
	}
	return (rd);
}

int	get_fd_line(int const fd, char **line, char **rest)
{
	char	*tmp;
	int		len;
	int		rd;

	len = indexof(*rest, '\n');
	rd = gnl_read(fd, rest, &tmp, &len);
	if (rd == -1)
		return (-1);
	tmp = *rest;
	if (tmp)
		*line = gnl_concat(NULL, tmp, len);
	else
		*line = gnl_concat(NULL, "", len);
	if (!*line)
		return (-1);
	rd = (tmp && tmp[len] == '\n' && ++len);
	*rest = NULL;
	if (tmp && tmp[len])
		*rest = gnl_concat(tmp + len, NULL, -1);
	free(tmp);
	return (rd || *rest);
}
