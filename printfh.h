/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfh.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:34:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/18 10:43:48 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFH_H
# define PRINTFH_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_flags(const char *str, va_list strings);
void	ft_printint(va_list strings);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_hexamain(const char *str, int strpos,va_list strings);

#endif
