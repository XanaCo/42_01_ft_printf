/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancolmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:50:44 by ancolmen          #+#    #+#             */
/*   Updated: 2022/11/21 17:25:31 by ancolmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_putnbr_base(unsigned long nb, char *base)
{
	unsigned long	length;
	size_t			len;

	len = 0;
	length = ft_strlen(base);
	if (nb >= length)
		len += ft_putnbr_base(nb / length, base);
	len += ft_putchar(base[nb % length]);
	return (len);
}
