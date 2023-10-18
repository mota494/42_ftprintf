/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:59:16 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 11:59:39 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfh.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i], count);
		i++;
	}
}