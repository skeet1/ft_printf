/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:41:54 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 08:32:03 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(unsigned int n, int count)
{
	if (n > 9)
	{
		ft_print_u(n / 10, count);
		ft_print_u(n % 10, count);
	}
	else
		ft_putchar(n + 48, count, 0);
}
