/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:33:07 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/27 00:11:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_io.h"

int	ft_putint_base_fd(int const nb, char const *base, int const fd)
{
	int		ret;
	char	*buff;
	t_uint	base_len;

	if (write(fd, "", 0) == -1 || !ft_isvalid(base))
		return (-1);
	buff = ft_itoa_base(nb, base);
	if (!buff)
		return (-1);
	base_len = (t_uint)ft_indexof(0, base);
	ret = (int)write(fd, buff, ft_intlen_base(nb, base_len));
	free(buff);
	return (ret);
}
