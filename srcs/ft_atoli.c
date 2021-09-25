/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 11:34:54 by jdufour           #+#    #+#             */
/*   Updated: 2021/09/25 22:34:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_lint	ft_atoli(char const *s)
{
	t_lint	res;
	int		sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*s))
		++s;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign ^= ~1u;
	while (ft_isdigit(*s))
		res = res * 10 + *s++ - '0';
	return (res * sign);
}
