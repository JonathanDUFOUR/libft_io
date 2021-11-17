/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hutoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:54:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/15 20:11:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_io.h"

char	*ft_hutoa(t_huint nb)
{
	char	*output;
	char	*ptr;
	t_uint	len;

	len = ft_huintlen(nb);
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
