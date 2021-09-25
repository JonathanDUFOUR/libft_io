/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 22:04:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 22:35:37 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_luint	ft_atolu(char const *s)
{
	t_luint	res;

	res = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '+')
		++s;
	while (ft_isdigit(*s))
		res = res * 10 + *s++ - '0';
	return (res);
}
