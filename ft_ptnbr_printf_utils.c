/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr_printf_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:19:02 by bbrahim           #+#    #+#             */
/*   Updated: 2021/12/14 11:28:42 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	ft_putnbr(long int nb)
{
	int	il;

	il = ft_intlen(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (il);
}

int	ft_u_putnbr(unsigned int nb)
{
	int	il;

	il = ft_intlen(nb);
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_u_putnbr(nb / 10);
		ft_u_putnbr(nb % 10);
	}
	return (il);
}

int	ft_lx_puthnbr(unsigned int nb)
{
	int		il;
	char	*h;

	il = ft_hx_intlen(nb);
	h = "0123456789abcdef";
	if (nb >= 0 && nb < 16)
		ft_putchar(h[nb]);
	else if (nb >= 16)
	{
		ft_lx_puthnbr(nb / 16);
		ft_lx_puthnbr(nb % 16);
	}
	return (il);
}

int	ft_ux_puthnbr(unsigned int nb)
{
	int		il;
	char	*h;

	il = ft_hx_intlen(nb);
	h = "0123456789ABCDEF";
	if (nb >= 0 && nb < 16)
		ft_putchar(h[nb]);
	else if (nb >= 16)
	{
		ft_ux_puthnbr(nb / 16);
		ft_ux_puthnbr(nb % 16);
	}
	return (il);
}

int	ft_putnbr_ptr(unsigned long int nb)
{
	int		l;
	char	*h;

	l = ft_hx_intlen(nb);
	h = "0123456789abcdef";
	if (nb >= 0 && nb < 16)
		ft_putchar(h[nb]);
	else if (nb >= 16)
	{
		ft_putnbr_ptr(nb / 16);
		ft_putnbr_ptr(nb % 16);
	}
	return (l + 2);
}
