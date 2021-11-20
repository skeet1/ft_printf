/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:07:03 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 08:35:49 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int count, int prcnt);
void	ft_print_d(int n, int count);
void	ft_print_c(unsigned char c, int count);
void	ft_print_s(char *s, int count);
void	ft_print_p(long long n, int count);
void	ft_putnbr(long long n, int count);
void	ft_print_x(long long n, int count, int Upper);
void	ft_print_u(unsigned int n, int count);
void	ft_putstr(char *s, int count);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);

#endif
