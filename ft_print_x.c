/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:53:43 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 14:59:54 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(long long n, int count, int upper)
{
	char	*hex;

	hex = ft_strdup("0123456789abcdef");
	if (upper)
		hex = ft_strdup("0123456789ABCDEF");
	if (n > 15)
	{
		ft_print_x(n / 16, count, upper);
		ft_print_x(n % 16, count, upper);
	}
	else
		count = ft_putchar(hex[n], count, 0);
	return (count);
}
