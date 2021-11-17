/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:21:19 by jdufour           #+#    #+#             */
/*   Updated: 2021/11/16 14:58:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static size_t	ft_strlen(char const *str)
{
	register char const	*ptr = str;

	while (*ptr)
		++ptr;
	return (ptr - str);
}

int	ft_atoi_base(char const *str, char const *base)
{
	int	output;
	int	sign;
	int	base_len;

	if (!str)
		return (0);
	if (!ft_isvalid(base))
		return (0);
	output = 0;
	sign = 1;
	base_len = ft_strlen(base);
	while (ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign ^= ~1u;
	while (*str && ft_indexof(*str, base) != -1)
		output = output * base_len + ft_indexof(*str++, base);
	return (sign * output);
}
