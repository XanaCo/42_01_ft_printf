/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancolmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:23:56 by ancolmen          #+#    #+#             */
/*   Updated: 2022/11/30 17:26:37 by ancolmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_base	*ft_format_base(const char *format, va_list ap)
{
	t_base	*base;

	base = malloc(sizeof(t_base));
	if (!base)
		return (NULL);
	base->str = format;
	va_copy(base->arg, ap);
	base->len = 0;
	base->i = 0;
	return (base);
}
