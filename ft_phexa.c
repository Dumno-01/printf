/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:55:54 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/30 17:17:15 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long long nb, char *base, long *len)
{
	if (nb < 16)
		ft_countwrite(len, base[nb]);
	if (nb > 16)
	{
		ft_puthexa(nb / 16, base, len);
		ft_puthexa(nb % 16, base, len);
	}
}

long int	ft_phexa(unsigned long long nb, int ispointer, char *base)
{
	long	l;

	if(ispointer == 1)
	{
		write(1, "0x", 2);
		l = 2;
	}
	else
		l = 0;
	ft_puthexa(nb, base, &l);
	return (l);
}
