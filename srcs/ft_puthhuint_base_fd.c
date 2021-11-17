/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthhuint_base_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:31:44 by jodufour          #+#    #+#             */
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

int	ft_puthhuint_base_fd(t_hhuint const nb, const char *base, int const fd)
{
	t_uint	base_len;
	char	digit;

	if (!ft_isvalid(base) || write(fd, "", 0) == -1)
		return (-1);
	base_len = (t_uint)ft_strlen(base);
	digit = base[nb % base_len];
	if (nb / base_len)
		return (ft_puthhuint_base_fd(nb / base_len, base, fd)
			+ (int)write(fd, &digit, 1));
	return ((int)write(fd, &digit, 1));
}
