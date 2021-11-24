/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:12:17 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/23 18:30:58 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	p;
	int		i;
	int		count;

	va_start(p, fmt);
	i = -1;
	count = 0;
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
		if (fmt[i] == '%' && fmt[i + 1] == 'c')
			ft_putchar(va_arg(p, int), &count);
		else if (fmt[i] == '%' && (fmt[i + 1] == 'd' || fmt[i + 1] == 'i'))
			ft_putnbr(va_arg(p, int), &count);
		else if (fmt[i] == '%' && fmt[i + 1] == 'u')
			ft_putnbr_u(va_arg(p, unsigned int), &count);
		else if (fmt[i] == '%' && fmt[i + 1] == 's')
			ft_putstr(va_arg(p, char *), &count);
		else if (fmt[i] == '%' && fmt[i + 1] == 'p')
			ft_print_p(va_arg(p, unsigned long), &count);
		else if (fmt[i] == '%' && (fmt[i + 1] == 'x' || fmt[i + 1] == 'X'))
			ft_print_x(va_arg(p, unsigned int), &count, fmt[i + 1] == 'X');
		else if (fmt[i] == '%' && fmt[i + 1] == '%')
			ft_putchar('%', &count);
		i++;
		}
		else if (fmt[i] != '%')
			ft_putchar(fmt[i], &count);
	}
	va_end(p);
	return (count);
}
