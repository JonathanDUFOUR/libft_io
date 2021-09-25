/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:02:43 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/25 23:09:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <string.h>
# include <stdbool.h>
# include <stdint.h>
# include <unistd.h>
# include <wchar.h>
# include "ft_printf.h"
# include "get_next_line.h"
# include "type/t_int.h"

# ifndef BUFF_SIZE
#  define BUFF_SIZE 4096
# endif

int			ft_atoi_base(char const *s, char const *b);
int			ft_atoi(char const *s) __attribute__((nonnull));
int			ft_putbyte_fd(uint8_t byte, int fd);
int			ft_putbytes_fd(void *addr, size_t size, int fd);
int			ft_putchar_fd(wchar_t c, int fd);
int			ft_putint_fd(int n, int fd);
int			ft_putlint_fd(t_lint n, int fd);
int			ft_putllint_fd(t_llint n, int fd);
int			ft_putlluint_fd(t_lluint n, int fd);
int			ft_putluint_fd(t_luint n, int fd);
int			ft_putuint_base_fd(t_uint n, const char *base, int fd);
int			ft_putuint_fd(t_uint n, int fd);
int			ft_tolower(int c);
int			ft_toupper(int c);

void		ft_cat(char **f);

bool		ft_isalnum(int c);
bool		ft_isalpha(int c);
bool		ft_isascii(int c);
bool		ft_isdigit(int c);
bool		ft_islower(int c);
bool		ft_isprint(int c);
bool		ft_isspace(int c);
bool		ft_isupper(int c);
bool		ft_wrong_base(char const *base);

char		*ft_convert_base(char const *n,
				char const *base_from, char const *base_to);
char		*ft_ctoa(char const c);
char		*ft_itoa_base(int n, char const *base);
char		*ft_itoa(int n);
char		*ft_lutoa_base(t_luint n, char const *base);
char		*ft_utoa_base(t_uint n, char const *base);
char		*ft_utoa(t_uint n);

t_hhint		ft_atohhi(char const *s) __attribute__((nonnull));

t_hhuint	ft_atohhu(char const *s) __attribute__((nonnull));

t_hint		ft_atohi(char const *s) __attribute__((nonnull));

t_huint		ft_atohu(char const *s) __attribute__((nonnull));

t_uint		ft_atou(char const *s) __attribute__((nonnull));
t_uint		ft_hhintlen(t_hhint n);
t_uint		ft_hhuintlen(t_hhuint n);
t_uint		ft_hintlen(t_hint n);
t_uint		ft_huintlen(t_huint n);
t_uint		ft_intlen(int n);
t_uint		ft_lintlen(t_lint n);
t_uint		ft_llintlen(t_llint n);
t_uint		ft_lluintlen(t_lluint n);
t_uint		ft_luintlen(t_luint n);
t_uint		ft_uintlen(t_uint n);

t_lint		ft_atoli(char const *s) __attribute__((nonnull));

t_luint		ft_atolu(char const *s) __attribute__((nonnull));

t_llint		ft_atolli(char const *s) __attribute__((nonnull));

t_lluint	ft_atollu(char const *s) __attribute__((nonnull));

ssize_t		ft_file_size(char *f);
ssize_t		ft_indexof(char c, char const *str);
ssize_t		ft_putendl_fd(char const *s, int fd);
ssize_t		ft_putstr_fd(char const *s, int fd);

#endif
