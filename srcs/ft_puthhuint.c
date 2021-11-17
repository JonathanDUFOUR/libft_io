/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthhuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 01:35:22 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/15 01:36:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_int.h"

int	ft_puthhuint_fd(t_hhuint const nb, int const fd)
{
	char	digit;

	if (write(fd, "", 0) == -1)
		return (-1);
	digit = nb % 10 + '0';
	if (nb / 10)
		return (ft_puthhint_fd(nb / 10, fd) + (int)write(fd, &digit, 1));
	return ((int)write(fd, &digit, 1));
}
