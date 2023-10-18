/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:10:00 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 10:53:43 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"

void	ft_uphex(unsigned int num);
void	ft_lowhex(unsigned int num);
void	ft_putnbrhex(unsigned int num, char *hex);

void	ft_hexamain(const char *str, int strpos,va_list strings)
{
	if (str[strpos] == 'x')
		ft_lowhex(va_arg(strings, unsigned int));
	else if (str[strpos] == 'X')
		ft_uphex(va_arg(strings, unsigned int));
	else
		write(1, "You weren't supposed to see this", 32);
}

void	ft_putnbrhex(unsigned int num, char *hex)
{
	if (num >= 16)
	{
		ft_putnbrhex(num / 16, hex);
		ft_putnbrhex(num % 16, hex);
	}
	else
		ft_putchar(hex[num]);
}

void	ft_uphex(unsigned int num)
{
	char uphex[] = "0123456789ABCDEF";
	ft_putnbrhex(num, uphex);
}

void	ft_lowhex(unsigned int num)
{
	char lowhex[] = "0123456789abcdef";
	ft_putnbrhex(num, lowhex);
}