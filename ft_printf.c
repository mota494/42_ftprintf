/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:28:31 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/17 17:22:59 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
    va_list strings;
    va_start(strings, str);
	ft_flags(str, strings);
	va_end(strings);
	return (0);
}

int main()
{
    ft_printf("Numero inserido: %d", 23);
    return (0);
}