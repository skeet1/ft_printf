/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:04:58 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/17 22:33:31 by mkarim           ###   ########.fr       */
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
		//if (fmt[i] == '%' && fmt[i + 1] == 'f')
		//	ft_print_f(va_arg(p, float));
		if (fmt[i] == '%' && fmt[i + 1] == 's')
			ft_print_s(va_arg(p, char *));
		if (fmt[i] == ' ')
			ft_putcharr(' ');
		if (fmt[i] == '\n')
			ft_putcharr('\n');
		if (fmt[i] == '\t')
			ft_putcharr('\t');
		i++;
	}
	return (0);
}

int	main()
{
	//ft_printf("%s", "  Hello world \n 1337\n");
	printf("%s", "  Hello world \n 1337\n");
	//int	a= 7, b = 3;
	//ft_printf("%d\n\t%d\n", a, b);
	//printf("%d\n\t%d\n", a, b);
}
