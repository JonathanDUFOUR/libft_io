/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:37:26 by jonathan          #+#    #+#             */
/*   Updated: 2021/11/15 01:37:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_int.h"

int	ft_putlint_fd(t_lint const nb, int const fd)
{
	t_luint	abs;
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
		return (ft_putlint_fd(abs / 10, fd) + (int)write(fd, &digit, 1)
			+ (nb < 0));
	return ((int)write(fd, &digit, 1) + (nb < 0));
}
