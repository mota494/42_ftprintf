/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:44:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/17 16:31:17 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"

void    ft_flags(const char *str, va_list strings)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == 'd')
				ft_printint(strings);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}