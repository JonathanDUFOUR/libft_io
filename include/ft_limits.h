/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:19:05 by jodufour          #+#    #+#             */
/*   Updated: 2021/11/18 23:27:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# define HHINT_MAX	~(1 << 7)
# define HHINT_MIN	1 << 7
# define HHUINT_MAX	(~0U) >> 24
# define HHUINT_MIN	0U
# define HINT_MAX	~(1 << 15)
# define HINT_MIN	(1 << 15)
# define HUINT_MAX	(~0U) >> 16
# define HUINT_MIN	0U
# define INT_MAX	~(1 << 31)
# define INT_MIN	1 << 31
# define UINT_MAX	~0U
# define UINT_MIN	0U
# define LINT_MAX	~(1L << 63)
# define LINT_MIN	1L << 63
# define LUINT_MAX	~0LU
# define LUINT_MIN	0LU
# define LLINT_MAX	~(1LL << 63)
# define LLINT_MIN	1LL << 63
# define LLUINT_MAX	~0LLU
# define LLUINT_MIN	0LLU

#endif
