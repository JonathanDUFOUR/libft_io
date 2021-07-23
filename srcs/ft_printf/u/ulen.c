/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulen.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:39:47 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/23 00:53:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typedefs/t_int.h"

t_uint	ulen(t_lluint n)
{
	t_uint	len;

	len = 1;
	n /= 10;
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}
