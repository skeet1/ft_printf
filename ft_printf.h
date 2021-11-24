/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:25:47 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/23 18:30:03 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int		ft_printf(const char *fmt, ...);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_u(int n, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_print_x(unsigned long long n, int *count, int upper);
void	ft_print_p(unsigned long n, int *count);

#endif
