/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:44:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 12:02:19 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"

void    ft_flags(const char *str, va_list strings, int *count)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd' || str[i] == 'i' || str[i] == 'u')
				ft_printint(va_arg(strings, int), count);
			if (str[i] == 'c')
				ft_putchar(va_arg(strings, int), count);
			if (str[i] == '%')
				ft_putchar('%', count);
			if (str[i] == 's')
				ft_putstr(va_arg(strings, char *), count);
			if (str[i] == 'x' || str[i] == 'X')
				ft_hexamain(str, i, strings, count);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}