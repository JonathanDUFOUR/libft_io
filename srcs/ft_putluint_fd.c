/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putluint_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:42:00 by jonathan          #+#    #+#             */
/*   Updated: 2021/11/20 08:22:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_int.h"

int	ft_putluint_fd(t_luint const nb, int const fd)
{
	char	digit;

	if (write(fd, "", 0) == -1)
		return (-1);
	digit = nb % 10 + '0';
	if (nb / 10)
		return (ft_putluint_fd(nb / 10, fd) + (int)write(fd, &digit, 1));
	return ((int)write(fd, &digit, 1));
}
