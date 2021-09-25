/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohhi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:55:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 22:55:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_hhint	ft_atohhi(char const *s)
{
	t_hhint	res;
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
