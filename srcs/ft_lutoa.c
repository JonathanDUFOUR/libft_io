/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lutoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:58:50 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/14 23:59:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_io.h"

char	*ft_lutoa(t_luint nb)
{
	char	*output;
	char	*ptr;
	t_uint	len;

	len = ft_luintlen(nb);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output + len;
	*ptr-- = 0;
	if (!nb)
		*ptr = '0';
	else
	{
		while (nb && len--)
		{
			*ptr-- = (nb % 10) + '0';
			nb /= 10;
		}
	}
	return (output);
}
