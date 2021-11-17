/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:14:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/15 23:59:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	int_strlen(char const *str)
{
	register char const	*ptr = str;

	while (*ptr)
		++ptr;
	return (ptr - str);
}
