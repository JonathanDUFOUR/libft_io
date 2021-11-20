/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthhint_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:24:50 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/20 08:08:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int	ft_puthhint_base_fd(t_hhint const nb, const char *base, int const fd)
{
	t_hhuint	abs;
	char		digit;
	int			base_len;

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
		return (ft_puthhint_base_fd(abs / base_len, base, fd)
			+ (int)write(fd, &digit, 1) + (nb < 0));
	return ((int)write(fd, &digit, 1) + (nb < 0));
}
