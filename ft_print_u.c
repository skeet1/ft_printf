/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:41:54 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 14:38:12 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n, int count)
{
	if (n > 9)
	{
		ft_print_u(n / 10, count);
		ft_print_u(n % 10, count);
	}
	else
		count = ft_putchar(n + 48, count, 0);
	return (count);
}
