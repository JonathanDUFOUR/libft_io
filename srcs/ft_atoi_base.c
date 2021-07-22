/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:19 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 04:58:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "ft_string.h"

int	ft_atoi_base(char const *s, char const *b)
{
	int	res;
	int	sign;
	int	b_size;

	if (!s)
		return (0);
	if (ft_wrong_base(b))
		return (0);
	res = 0;
	sign = 1;
	b_size = ft_strlen(b);
	while (ft_isspace(*s))
		++s;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign ^= ~1u;
	while (*s && ft_indexof(*s, b) != -1)
		res = res * b_size + ft_indexof(*s++, b);
	return (sign * res);
}
