/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:33:07 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/20 08:14:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	ft_putint_base_fd(int const nb, const char *base, int const fd)
{
	t_uint	abs;
	char	digit;
	int		base_len;

	if (write(fd, "", 0) == -1 || !ft_isvalid(base))
		return (-1);
	abs = nb;
	if (nb < 0)
	{
		abs = -nb;
		write(fd, "-", 1);
	}
	base_len = ft_indexof(0, base);
	digit = base[abs % base_len];
	if (abs / base_len)
		return (ft_putint_base_fd(abs / base_len, base, fd)
			+ (int)write(fd, &digit, 1) + (nb < 0));
	return ((int)write(fd, &digit, 1) + (nb < 0));
}
