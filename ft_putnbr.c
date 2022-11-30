/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:56:40 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/30 15:51:09 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long int	ft_neg(long int nb)
{
	nb *= -1;
	write(1, "-", 1);
	return (nb);
}

long	ft_putnbr_fd(int n)
{
	long int	mod;
	long int	nb;
	size_t		i;

	nb = n;
	if (nb < 0)
		nb = ft_neg(nb);
	if (nb > 9)
	{
		mod = nb % 10 + 48;
		nb = nb / 10;
		ft_putnbr_fd(nb);
		i += write(1, &mod, 1);
	}
	else
	{
		nb = nb + 48;
		i += write (1, &nb, 1);
	}
	return (i);
}
