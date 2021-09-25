/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lluintlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 23:30:54 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 23:31:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

t_uint	ft_lluintlen(t_lluint n)
{
	t_uint	len;

	len = 1;
	while (n / 10)
	{
		++len;
		n /= 10;
	}
	return (len);
}
