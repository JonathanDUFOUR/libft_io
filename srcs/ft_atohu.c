/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:53:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 22:53:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_huint	ft_atohu(char const *s)
{
	t_huint	res;

	res = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '+')
		++s;
	while (ft_isdigit(*s))
		res = res * 10 + *s++ - '0';
	return (res);
}
