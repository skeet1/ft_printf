/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:04:58 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 08:36:19 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	p;
	int		i;
	int		count;

	count = 0;
	va_start(p, fmt);
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && (fmt[i + 1] == 'd' || fmt[i + 1] == 'i'))
			ft_putnbr(va_arg(p, int), count);
		if (fmt[i] == '%' && (fmt[i + 1] == 'c' || fmt[i + 1] == '%'))
			ft_putchar(va_arg(p, int), count, fmt[i + 1] == '%');
		if (fmt[i] == '%' && fmt[i + 1] == 'p')
			ft_print_p(va_arg(p, long long), count);
		if (fmt[i] == '%' && fmt[i + 1] == 'u')
			ft_print_u(va_arg(p, unsigned int), count);
		if (fmt[i] == '%' && fmt[i + 1] == 's')
			ft_putstr(va_arg(p, char *), count);
		if (fmt[i] == '%' && (fmt[i + 1] == 'x' || fmt[i + 1] == 'X'))
			ft_print_x(va_arg(p, int), count, (fmt[i + 1] == 'X'));
		i++;
	}
	return (count);
}
