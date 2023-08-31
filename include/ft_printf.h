/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancolmen <ancolmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:27:27 by ancolmen          #+#    #+#             */
/*   Updated: 2023/05/25 13:32:13 by ancolmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

# define HEX_UB "0123456789ABCDEF"
# define HEX_LB "0123456789abcdef"

typedef struct s_base
{
	const char	*str;
	va_list		arg;
	size_t		len;
	size_t		i;
}	t_base;

int		ft_printf(const char *format, ...);

int		ft_var_printf(const char *format, va_list ap);

void	ft_checkandprint(t_base *base);

t_base	*ft_format_base(const char *format, va_list ap);

size_t	ft_putchar(char c);

size_t	ft_putnbr(int n);

size_t	ft_putnbr_u(unsigned int n);

size_t	ft_putstr(char *s);

size_t	ft_strlen(const char *s);

size_t	ft_putnbr_base(unsigned long nb, char *base);

size_t	ft_putptr(void *p);

#endif
