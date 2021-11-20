/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohhi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:50:59 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/20 07:49:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_hhint	ft_atohhi_base(char const *str, char const *base)
{
	t_hhint	output;
	int		sign;
	int		base_len;

	if (!ft_isvalid(base))
		return (0);
	output = 0;
	sign = 1;
	base_len = ft_indexof(0, base);
	while (ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign ^= ~1u;
	while (*str && ft_indexof(*str, base) != -1)
		output = output * base_len + ft_indexof(*str++, base);
	return (output * sign);
}