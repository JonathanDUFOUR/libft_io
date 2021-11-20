/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putluint_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:06:55 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/20 08:22:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	ft_putluint_base_fd(t_luint const nb, const char *base, int const fd)
{
	char	digit;
	int		base_len;

	if (write(fd, "", 0) == -1 || !ft_isvalid(base))
		return (-1);
	base_len = ft_indexof(0, base);
	digit = base[nb % base_len];
	if (nb / base_len)
		return (ft_putluint_base_fd(nb / base_len, base, fd)
			+ (int)write(fd, &digit, 1));
	return ((int)write(fd, &digit, 1));
}
