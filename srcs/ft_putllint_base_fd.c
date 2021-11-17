/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllint_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:33:07 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/16 14:58:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static size_t	ft_strlen(char const *str)
{
	register char const	*ptr = str;

	while (*ptr)
		++ptr;
	return (ptr - str);
}

int	ft_putllint_base_fd(t_llint const nb, const char *base, int const fd)
{
	t_lluint	abs;
	char		digit;
	t_uint		base_len;

	if (!ft_isvalid(base) || write(fd, "", 0) == -1)
		return (-1);
	abs = nb;
	if (nb < 0)
	{
		abs = -nb;
		write(fd, "-", 1);
	}
	base_len = (t_uint)ft_strlen(base);
	digit = base[nb % base_len];
	if (nb / base_len)
		return (ft_putllint_base_fd(nb / base_len, base, fd)
			+ (int)write(fd, &digit, 1) + (nb < 0));
	return ((int)write(fd, &digit, 1) + (nb < 0));
}
