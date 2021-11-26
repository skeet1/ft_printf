/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:07:37 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/25 14:11:31 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(unsigned long long n, int *count, int upper)
{
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
			ft_putchar(UPP_X[n], count);
		else
			ft_putchar(LOW_X[n], count);
	}
}
