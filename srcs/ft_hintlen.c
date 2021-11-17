/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 23:17:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/14 23:36:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type/t_int.h"

t_uint	ft_hintlen(t_hint nb)
{
	t_uint	len;

	len = 1 + (nb < 0);
	while (nb / 10)
	{
		++len;
		nb /= 10;
	}
	return (len);
}