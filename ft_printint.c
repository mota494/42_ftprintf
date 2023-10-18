/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:48:52 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 14:38:43 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printint(const char *str, int strpos,va_list strings, int *count)
{
	int					num;
	unsigned int	unslong;

	if(str[strpos] == 'i' || str[strpos] == 'd')
	{
		num = va_arg(strings, int);
		ft_putnbr(num, count);
	}
	else
	{
		unslong = va_arg(strings, unsigned int);
		ft_unsputnbr(unslong, count);
	}
}