/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlluint_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:18:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/15 01:38:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_int.h"

int	ft_putlluint_fd(t_lluint const nb, int const fd)
{
	char	digit;

	if (write(fd, "", 0) == -1)
		return (-1);
	digit = nb % 10 + '0';
	if (nb / 10)
		return (ft_putlluint_fd(nb / 10, fd) + (int)write(fd, &digit, 1));
	return ((int)write(1, &digit, 1));
}
