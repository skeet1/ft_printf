/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:53:43 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/19 09:06:07 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_hex(int n)
{
	char	hex[] = "0123456789abcdef";

	if (n > 15)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	else
		ft_putchar_fd(hex[n], 1);
}
int main()
{
	int a = -122;
	printf("%x\n", a);
	//ft_print_hex(a);
}
