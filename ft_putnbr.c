/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:56:40 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/30 17:51:29 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	long int	ft_neg(long int nb)
{
	nb *= -1;
	write(1, "-", 1);
	return (nb);
}

long	ft_putnbr(int n, int len)
{
	long int	mod;
	long int	nb;
	size_t		i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb = ft_neg(nb);
		len++;
	}
	if (nb > 9)
	{
		mod = nb % 10 + 48;
		nb = nb / 10;
		ft_putnbr(nb, len);
		len += write(1, &mod, 1);
	}
	else
	{
		nb = nb + 48;
		len += write (1, &nb, 1);
	}
	return (len);
}
