/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:04:58 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/19 08:54:34 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharr(char c)
{
	write(1, &c, 1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	p;
	int		len_fmt;
	int		i;

	len_fmt = ft_strlen(fmt) - 1;
	va_start(p, fmt);
	i = 0;
	while (fmt[i] && i < len_fmt)
	{
		if (fmt[i] == '%' && fmt[i + 1] == 'd')
			ft_print_d(va_arg(p, int));
		if (fmt[i] == '%' && fmt[i + 1] == 'c')
			ft_print_c(va_arg(p, int));
		//if (fmt[i] == '%' && fmt[i + 1] == 'x')
		//	ft_print_x(va_arg(p, int));
		if (fmt[i] == '%' && fmt[i + 1] == 'p')
			ft_print_p(va_arg(p, char *));
		if (fmt[i] == '%' && fmt[i + 1] == 's')
			ft_print_s(va_arg(p, char *));
		if (fmt[i] == ' ' || fmt[i] == '\n' || fmt[i] == '\t' || fmt[i] == '-')
			ft_putcharr(fmt[i]);
		i++;
	}
	return (0);
}

int	main()
{
	int		a;

	 a= 5;
	 printf("%d - %p\n", a, &a);
	 ft_printf("%d - %p\n", a, &a);
	//ft_printf("%s", "  Hello world \n 1337\n");
	//printf("%s", "  Hello world \n 1337\n");
	//int	a= 7, b = 3;
	//ft_printf("%d\n\t%d\n", a, b);
	//printf("%d\n\t%d\n", a, b);
}
