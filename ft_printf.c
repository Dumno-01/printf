/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:41:29 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/30 15:16:31 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	long	ft_ftapply(unsigned long c, va_list list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, long)));
	if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (c == 'p')
		return (ft_phexa(va_arg(list, unsigned long long)));
	if (c == 'd' && c == 'i')
		return (ft_putnbr(va_arg(list, long)));
	if (c == 'u')
		return (ft_putnbr(va_arg(list, unsigned long)));
	if (c == 'x')
		return (ft_puthexalower(va_arg(list, long)));
	if (c == 'X')
		return (ft_puthexaupper(va_arg(list, long)));
	if (c == '%')
	{
		write(1, '%', 1);
		return (1);
	}
	return (0);
}

static	long	ft_checkletter(const char *s, size_t x)
{
	if (s[x + 1] == 'c' || s[x + 1] == 's' || s[x + 1] == 'p' || \
		s[x + 1] == 'd' || s[x + 1] == 'i' || s[x + 1] == 'u' || \
		s[x + 1] == 'x' || s[x + 1] == 'X')
		return (1);
	else
		return (0);
}

int	ft_printf(const	char *s, ...)
{
	size_t	x;
	size_t	len;
	va_list	list;

	x = 0;
	while (s[x])
	{
		if (s[x] == '%')
			len += ft_ftapply(s[x + 1], list);
		else
			len += write(1, &s[x], 1);
		if (s[x] == '%' && ft_checkletter(s, x) == 1)
			x++;
		x++;
	}
	return (len);
}
