/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfh.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:34:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/17 16:49:08 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SGOINFRE_PRINTFH_H
# define SGOINFRE_PRINTFH_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_flags(const char *str, va_list strings);
void	ft_printint(va_list strings);
void	ft_putnbr(int n);
void	ft_putchar(char c);

#endif
