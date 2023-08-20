/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:05:29 by jodufour          #+#    #+#             */
/*   Updated: 2023/08/20 04:44:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORS_H
# define FT_COLORS_H

# define BLACK_FG	"\x1b[38;2;0;0;0m"
# define RED_FG		"\x1b[38;2;255;0;0m"
# define GREEN_FG	"\x1b[38;2;0;255;0m"
# define BLUE_FG	"\x1b[38;2;0;0;255m"
# define YELLOW_FG	"\x1b[38;2;255;255;0m"
# define MAGENTA_FG	"\x1b[38;2;255;0;255m"
# define CYAN_FG	"\x1b[38;2;0;255;255m"
# define WHITE_FG	"\x1b[38;2;255;255;255m"

# define BLACK_BG	"\x1b[48;2;0;0;0m"
# define RED_BG		"\x1b[48;2;255;0;0m"
# define GREEN_BG	"\x1b[48;2;0;255;0m"
# define BLUE_BG	"\x1b[48;2;0;0;255m"
# define YELLOW_BG	"\x1b[48;2;255;255;0m"
# define MAGENTA_BG	"\x1b[48;2;255;0;255m"
# define CYAN_BG	"\x1b[48;2;0;255;255m"
# define WHITE_BG	"\x1b[48;2;255;255;255m"

# define BOLD		"\x1b[1m"
# define BLINK		"\x1b[5m"

# define RESET		"\x1b[0m"

#endif
