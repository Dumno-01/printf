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

# define HEXA_LOWER "0123456789abcdef"
# define HEXA_UPPER "0123456789ABCDEF"

int				ft_printf(const	char *s, ...);
int				ft_putchar(char c);
long int		ft_puthexa(size_t nb, char *base, long len);
long int		ft_phexa(size_t nb, long len);
long			ft_putnbr(int n, int len);
long			ft_putstr(char *s, int len);
#endif
