/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hhitoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:02:23 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/16 14:58:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_io.h"

static size_t	ft_strlen(char const *str)
{
	register char const	*ptr = str;

	while (*ptr)
		++ptr;
	return (ptr - str);
}

char	*ft_hhitoa_base(t_hhint nb, char const *base)
{
	char	*output;
	t_uint	len;
	t_uint	base_len;

	if (!ft_isvalid(base))
		return (NULL);
	len = ft_hhintlen_base(nb, (base_len = (t_uint)ft_strlen(base)));
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output += len;
	*output-- = 0;
	if (!nb)
		*output-- = '0';
	else
	{
		while (nb && len--)
		{
			*output-- = base[(-(nb < 0) | 1) * (nb % base_len)];
			nb /= base_len;
		}
		if (len)
			*output-- = '-';
	}
	return (++output);
}
