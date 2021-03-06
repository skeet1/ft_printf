/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:05:36 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/23 11:42:26 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(unsigned long n, int *count)
{
	if (n < 0)
		n *= -1;
	ft_putstr("0x", count);
	ft_print_x(n, count, 0);
}
