/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:19:05 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/19 08:24:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# include "type/t_int.h"

enum	e_int_limits
{
	HHINT_MAX	= (t_hhint)(~(1 << 7)),
	HHINT_MIN	= (t_hhint)(1 << 7),
	HHUINT_MAX	= (t_hhuint)((~0U) >> 24),
	HHUINT_MIN	= (t_hhuint)(0U),
	HINT_MAX	= (t_hint)(~(1 << 15)),
	HINT_MIN	= (t_hint)(1 << 15),
	HUINT_MAX	= (t_huint)((~0U) >> 16),
	HUINT_MIN	= (t_huint)(0U),
	INT_MAX		= (t_int)(~(1 << 31)),
	INT_MIN		= (t_int)(1 << 31),
	UINT_MAX	= (t_uint)(~0U),
	UINT_MIN	= (t_uint)(0U),
	LINT_MAX	= (t_lint)(~(1L << 63)),
	LINT_MIN	= (t_lint)(1L << 63),
	LUINT_MAX	= (t_luint)(~0LU),
	LUINT_MIN	= (t_luint)(0LU),
	LLINT_MAX	= (t_llint)(~(1LL << 63)),
	LLINT_MIN	= (t_llint)(1LL << 63),
	LLUINT_MAX	= (t_lluint)(~0LLU),
	LLUINT_MIN	= (t_lluint)(0LLU)
};

#endif
