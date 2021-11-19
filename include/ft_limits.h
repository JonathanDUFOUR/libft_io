/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:19:05 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/19 03:39:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# include "type/t_int.h"

# define HHINT_MAX	(t_hhint)(~(1 << 7))
# define HHINT_MIN	(t_hhint)(1 << 7)
# define HHUINT_MAX	(t_hhuint)((~0U) >> 24)
# define HHUINT_MIN	(t_hhuint)(0U)
# define HINT_MAX	(t_hint)(~(1 << 15))
# define HINT_MIN	(t_hint)(1 << 15)
# define HUINT_MAX	(t_huint)((~0U) >> 16)
# define HUINT_MIN	(t_huint)(0U)
# define INT_MAX	(t_int)(~(1 << 31))
# define INT_MIN	(t_int)(1 << 31)
# define UINT_MAX	(t_uint)(~0U)
# define UINT_MIN	(t_uint)(0U)
# define LINT_MAX	(t_lint)(~(1L << 63))
# define LINT_MIN	(t_lint)(1L << 63)
# define LUINT_MAX	(t_luint)(~0LU)
# define LUINT_MIN	(t_luint)(0LU)
# define LLINT_MAX	(t_llint)(~(1LL << 63))
# define LLINT_MIN	(t_llint)(1LL << 63)
# define LLUINT_MAX	(t_lluint)(~0LLU)
# define LLUINT_MIN	(t_lluint)(0LLU)

#endif
