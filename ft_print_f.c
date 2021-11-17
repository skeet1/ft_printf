/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:29:12 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/17 19:37:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_print_f(float f)
{
	static int		pass_vir;

	pass_vir = 0;
	if (f < 0)
	{
		ft_putchar_fd('-', 1);
		f *= -1;
	}
	if (f > 9)
	{
		ft_print_f(f / 10);
		ft_print_f(f % 10);
	}
	else if (f >= 1)
	{
		ft_putchar(f - 48);
	}
	else if (f > 0)
	{
		ft_putchar_fd(',', 1);
		pass_vir++;
		ft_print_f(f * 100000);
	}
}

int main()
{
	ft_print_f(1234.333);
	printf("\n1234.333");
}
