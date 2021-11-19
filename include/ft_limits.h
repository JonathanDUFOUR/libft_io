/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:19:05 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/19 09:03:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# include "type/t_int.h"

static t_hhint const	g_hhint_max = 0x7f;
static t_hhint const	g_hhint_min = 0x80;
static t_hhuint const	g_hhuint_max = 0xff;
static t_hhuint const	g_hhuint_min = 0x00;
static t_hint const		g_hint_max = 0x7fff;
static t_hint const		g_hint_min = 0x8000;
static t_huint const	g_huint_max = 0xffff;
static t_huint const	g_huint_min = 0x0000;
static t_int const		g_int_max = 0x7fffffff;
static t_int const		g_int_min = 0x80000000;
static t_uint const		g_uint_max = 0xffffffff;
static t_uint const		g_uint_min = 0x00000000;
static t_lint const		g_lint_max = 0x7fffffffffffffff;
static t_lint const		g_lint_min = 0x8000000000000000;
static t_luint const	g_luint_max = 0xffffffffffffffff;
static t_luint const	g_luint_min = 0x0000000000000000;
static t_llint const	g_llint_max = 0x7fffffffffffffff;
static t_llint const	g_llint_min = 0x8000000000000000;
static t_lluint const	g_lluint_max = 0xffffffffffffffff;
static t_lluint const	g_lluint_min = 0x0000000000000000;

#endif
