/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atollu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:45:11 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 22:45:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_lluint	ft_atollu(char const *s)
{
	t_lluint	res;

	res = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '+')
		++s;
	while (ft_isdigit(*s))
		res = res * 10 + *s++ - '0';
	return (res);
}
