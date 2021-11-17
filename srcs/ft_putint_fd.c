/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 02:19:11 by jdufour           #+#    #+#             */
/*   Updated: 2021/11/15 15:27:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_int.h"

int	ft_putint_fd(int const nb, int const fd)
{
	t_uint	abs;
	char	digit;

	if (write(fd, "", 0) == -1)
		return (-1);
	abs = nb;
	if (nb < 0)
	{
		abs = -nb;
		write(fd, "-", 1);
	}
	digit = abs % 10 + '0';
	if (abs / 10)
		return (ft_putint_fd(abs / 10, fd) + (int)write(fd, &digit, 1)
			+ (nb < 0));
	return ((int)write(fd, &digit, 1) + (nb < 0));
}
