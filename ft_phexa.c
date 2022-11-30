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

long int	ft_puthexa(size_t nb, char *base, long len)
{
	if (nb < 16)
		write(1, &nb, 1);
	if (nb > 16)
	{
		len += ft_puthexa(nb / 16, base, len);
		ft_puthexa(nb % 16, base, len);
	}
	return (len);
}

long int	ft_phexa(size_t nb, long len)
{
	write(1, "0x", 2);
	len += 2;
	ft_puthexa(nb, HEXA_LOWER, len);
	return (len);
}
