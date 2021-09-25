/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:37:00 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 22:37:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_llint	ft_atolli(char const *s)
{
	t_llint	res;
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
