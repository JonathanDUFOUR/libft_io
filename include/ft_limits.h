/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:19:05 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/19 08:46:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# include "type/t_int.h"

# define HHINT_MAX	0x7f
# define HHINT_MIN	0x80
# define HHUINT_MAX	0xff
# define HHUINT_MIN	0x00
# define HINT_MAX	0x7fff
# define HINT_MIN	0x8000
# define HUINT_MAX	0xffff
# define HUINT_MIN	0x0000
# define INT_MAX	0x7fffffff
# define INT_MIN	0x80000000
# define UINT_MAX	0xffffffff
# define UINT_MIN	0x00000000
# define LINT_MAX	0x7fffffffffffffff
# define LINT_MIN	0x8000000000000000
# define LUINT_MAX	0xffffffffffffffff
# define LUINT_MIN	0x0000000000000000
# define LLINT_MAX	0x7fffffffffffffff
# define LLINT_MIN	0x8000000000000000
# define LLUINT_MAX	0xffffffffffffffff
# define LLUINT_MIN	0x0000000000000000

#endif
