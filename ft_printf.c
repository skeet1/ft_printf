/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:04:58 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/21 17:47:30 by mkarim           ###   ########.fr       */
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
	i = -1;
	if (!fmt[0])
		count = ft_putstr("(null)", count);
	while (fmt[++i])
	{
		if (va_arg(p, char *) == NULL)
			count = ft_putstr("(null)", count);
		if (fmt[i] == '%' && (fmt[i + 1] == 'd' || fmt[i + 1] == 'i'))
			count = ft_putnbr(va_arg(p, int), count);
		else if (fmt[i] == '%' && (fmt[i + 1] == 'c' || fmt[i + 1] == '%'))
			count = ft_putchar(va_arg(p, int), count, fmt[i + 1] == '%');
		else if (fmt[i] == '%' && fmt[i + 1] == 'p')
			count = ft_print_p(va_arg(p, long long), count);
		else if (fmt[i] == '%' && fmt[i + 1] == 'u')
			count = ft_print_u(va_arg(p, unsigned int), count);
		else if (fmt[i] == '%' && fmt[i + 1] == 's')
			count = ft_putstr(va_arg(p, char *), count);
		else if (fmt[i] == '%' && (fmt[i + 1] == 'x' || fmt[i + 1] == 'X'))
			count = ft_print_x(va_arg(p, int), count, (fmt[i + 1] == 'X'));
		else if (fmt[i - 1] != '%')
			count = ft_putchar(fmt[i], count, 0);
	}
	return (count);
}

int main()
{
	char	*null_str = NULL;

	ft_printf(" NULL %d NULL ", NULL);
}
