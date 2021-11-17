/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:33:23 by jonathan          #+#    #+#             */
/*   Updated: 2021/11/15 01:38:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type/t_int.h"

int	ft_putuint_fd(t_uint const nb, int const fd)
{
	char	digit;

	digit = nb % 10 + '0';
	if (nb / 10)
		return (ft_putuint_fd(nb / 10, fd) + (int)write(fd, &digit, 1));
	return ((int)write(fd, &digit, 1));
}
