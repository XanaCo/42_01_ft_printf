/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancolmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:03:36 by ancolmen          #+#    #+#             */
/*   Updated: 2022/11/21 17:27:50 by ancolmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_putnbr(int nb)
{
	size_t	len;
	long	n;

	n = (long)nb;
	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = n * (-1);
	}
	if (n > 9)
		len += ft_putnbr(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}

size_t	ft_putnbr_u(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}
