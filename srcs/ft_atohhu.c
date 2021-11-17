/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohhu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:56:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/14 23:27:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_hhuint	ft_atohhu(char const *str)
{
	t_hhuint	output;

	output = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == '+')
		++str;
	while (ft_isdigit(*str))
		output = output * 10 + *str++ - '0';
	return (output);
}
