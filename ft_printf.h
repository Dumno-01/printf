/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffreze <ffreze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:49:50 by ffreze            #+#    #+#             */
/*   Updated: 2022/11/30 17:56:46 by ffreze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
#include <stdio.h>

# define HEXA_LOWER "0123456789abcdef"
# define HEXA_UPPER "0123456789ABCDEF"

int				ft_printf(const	char *s, ...);
int				ft_putchar(char c);
void        	ft_puthexa(unsigned long long nb, char *base, long *len);
long int		ft_phexa(unsigned long long nb, int ispointer, char *base);
void			ft_putnbr(int n, long *len);
long			ft_putstr(char *s);
void	        ft_countwrite(long *len, char c);
long int	    ft_pnbr(int nb);
#endif
