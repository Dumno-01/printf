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

static	long int	ft_neg(long int nb, long *len)
{
	nb *= -1;
	ft_countwrite(len, '-');
	return (nb);
}

void	ft_putnbr(int n, long *len)
{
	long int	mod;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		nb = ft_neg(nb, len);
	}
	if (nb > 9)
	{
		mod = nb % 10 + '0';
		nb = nb / 10;
		ft_putnbr(nb, len);
		ft_countwrite(len, mod);		
	}
	else
	{
		nb = nb + '0';
		ft_countwrite(len, nb);
	};
}

long int	ft_pnbr(size_t nb)
{
	long	l;

	l = 0;
	ft_putnbr(nb, &l);
	return (l);
}