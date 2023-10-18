/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:38:04 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 17:31:25 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointerputnbr(unsigned long n, int *count);

void	ft_printpointer(unsigned long l, int *count)
{
	if (!l)
	{
		write(1, "(nil)", 5);
		*count += 5;
	}
	else
	{
		write (1, "0x", 2);
		*count += 2;
		ft_pointerputnbr(l, count);
	}
}

void	ft_pointerputnbr(unsigned long n, int *count)
{
	char hex[] = "0123456789abcdef";

	if (n >= 16)
	{
		ft_pointerputnbr(n / 16, count);
		ft_pointerputnbr(n % 16, count);
	}
	else
		ft_putchar(hex[n], count);
}