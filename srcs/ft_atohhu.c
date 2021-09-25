/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohhu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:56:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 23:32:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_hhuint	ft_atohhu(char const *s)
{
	t_hhuint	res;

	res = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '+')
		++s;
	while (ft_isdigit(*s))
		res = res * 10 + *s++ - '0';
	return (res);
}
