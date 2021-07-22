/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:23:38 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/22 20:22:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_io.h"

static size_t	ft_strlen(char const *s)
{
	register char const	*p = s;

	while (*p)
		++p;
	return (p - s);
}

static uint32_t	get_o_len(uint32_t abs, uint32_t b_len, uint32_t sign)
{
	if (abs < b_len)
		return (sign + 1);
	return (sign + get_o_len(abs / b_len, b_len, 0) + 1);
}

static void	init_abs(uint32_t *abs, int n)
{
	if (n < 0)
		*abs = -n;
	else
		*abs = n;
}

char	*ft_itoa_base(int n, char const *base)
{
	char		*output;
	char		*p;
	uint32_t	abs;
	uint32_t	b_len;
	uint32_t	o_len;

	if (ft_wrong_base(base))
		return (NULL);
	init_abs(&abs, n);
	b_len = ft_strlen(base);
	o_len = get_o_len(abs, b_len, (n < 0));
	output = malloc((o_len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	p = output + o_len;
	*p = 0;
	if (n < 0 && --o_len)
		*output = '-';
	while (o_len--)
	{
		--p;
		*p = base[abs % b_len];
		abs /= b_len;
	}
	return (output);
}
