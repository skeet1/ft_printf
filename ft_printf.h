/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:07:03 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/20 14:58:16 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
int		ft_putchar(char c, int count, int prcnt);
int		ft_print_c(unsigned char c, int count);
int		ft_print_s(char *s, int count);
int		ft_print_p(long long n, int count);
int		ft_putnbr(long long n, int count);
int		ft_print_x(long long n, int count, int Upper);
int		ft_print_u(unsigned int n, int count);
int		ft_putstr(char *s, int count);
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
//char	*ft_strcpy(char *s, char *d);

#endif
