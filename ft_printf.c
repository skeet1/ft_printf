/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:12:17 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/26 11:03:08 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion(va_list p, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(p, int), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(p, int), count);
	else if (c == 'u')
		ft_putnbr_u(va_arg(p, unsigned int), count);
	else if (c == 's')
		ft_putstr(va_arg(p, char *), count);
	else if (c == 'p')
		ft_print_p(va_arg(p, unsigned long), count);
	else if (c == 'x' || c == 'X')
		ft_print_x(va_arg(p, unsigned int), count, c == 'X');
	else if (c == '%')
		ft_putchar('%', count);
}

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
			ft_conversion(p, fmt[i + 1], &count);
			i++;
		}
		else if (fmt[i] != '%')
			ft_putchar(fmt[i], &count);
	}
	va_end(p);
	return (count);
}
