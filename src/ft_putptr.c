/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancolmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:50:44 by ancolmen          #+#    #+#             */
/*   Updated: 2022/11/21 17:25:31 by ancolmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_putptr(void *p)
{
	size_t	len;

	len = 0;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len += write(1, "0x", 2);
	len += ft_putnbr_base((unsigned long)p, HEX_LB);
	return (len);
}
