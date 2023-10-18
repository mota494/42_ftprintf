/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:48:52 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 11:59:14 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"

void	ft_printint(va_list strings, int *count)
{
	int		num;

	num = va_arg(strings, int);
	ft_putnbr(num);
}