/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:07:37 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/23 11:50:01 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(unsigned long long n, int *count, int upper)
{
	char	low_x[] = "0123456789abcdef";
	char	upp_x[] = "0123456789ABCDEF";

	if (n < 0)
		n *= -1;
	if (n > 15)
	{
		ft_print_x(n / 16, count, upper);
		ft_print_x(n % 16, count, upper);
	}
	else
	{
		if (upper)
			ft_putchar(upp_x[n], count);
		else
			ft_putchar(low_x[n], count);
	}
}
