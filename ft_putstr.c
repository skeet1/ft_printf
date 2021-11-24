/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:41:33 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/23 14:10:16 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int		i;
	if (s == NULL)
		ft_putstr("(null)",count);
	else
	{
		i = 0;
		while (s[i])
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}
