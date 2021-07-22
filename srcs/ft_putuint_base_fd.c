/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 06:24:56 by jdufour           #+#    #+#             */
/*   Updated: 2021/07/21 04:30:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_io.h"
#include "ft_string.h"

int	ft_putuint_base_fd(t_uint n, const char *base, int fd)
{
	size_t	b_len;
	char	d;

	if (ft_wrong_base(base) || write(fd, "", 0) == -1)
		return (-1);
	b_len = ft_strlen(base);
	d = base[n % b_len];
	if (n >= b_len)
		return (ft_putuint_base_fd(n / b_len, base, fd)
			+ (int)write(fd, &d, 1));
	return ((int)write(fd, &d, 1));
}
