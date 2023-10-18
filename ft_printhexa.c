/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:10:00 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 12:08:12 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uphex(unsigned int num, int *count);
void	ft_lowhex(unsigned int num, int *count);
void	ft_putnbrhex(unsigned int num, char *hex, int *count);

void	ft_hexamain(const char *str, int strpos, va_list strings, int *count)
{
	if (str[strpos] == 'x')
		ft_lowhex(va_arg(strings, unsigned int), count);
	else if (str[strpos] == 'X')
		ft_uphex(va_arg(strings, unsigned int), count);
	else
		write(1, "You weren't supposed to see this", 32);
}

void	ft_putnbrhex(unsigned int num, char *hex, int *count)
{
	if (num >= 16)
	{
		ft_putnbrhex(num / 16, hex, count);
		ft_putnbrhex(num % 16, hex, count);
	}
	else
		ft_putchar(hex[num], count);
}

void	ft_uphex(unsigned int num, int *count)
{
	char uphex[] = "0123456789ABCDEF";
	ft_putnbrhex(num, uphex, count);
}

void	ft_lowhex(unsigned int num, int *count)
{
	char lowhex[] = "0123456789abcdef";
	ft_putnbrhex(num, lowhex, count);
}