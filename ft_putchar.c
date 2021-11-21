/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:22:42 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 14:32:21 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int count, int prcnt)
{
	if (prcnt)
	{
		write(1, "%", 1);
		count++;
		return (count);
	}
	write(1, &c, 1);
	count++;
	return (count);
}
