/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:25:21 by bbrahim           #+#    #+#             */
/*   Updated: 2021/12/14 11:20:29 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	ft_sh_flags(va_list	list, const char *arg, int *i)
{
	int	r;
	int	nb;

	r = 0;
	nb = va_arg(list, int);
	while (arg[*i] == '#')
		(*i)++;
	if ((arg[*i] == 'x' || arg[*i] == 'X'))
	{
		if (nb != 0 && arg[*i] == 'x')
		{
			r += write(1, "0x", 2);
			r += ft_lx_puthnbr(nb);
		}
		else if (nb != 0 && arg[*i] == 'X')
		{
			r += write(1, "0X", 2);
			r += ft_ux_puthnbr(nb);
		}
		else
			r += ft_putnbr(nb);
	}
	return (r);
}

int	ft_ps_flags(va_list	list, const char *arg, int *i)
{
	int	r;
	int	nb;

	r = 0;
	nb = va_arg(list, int);
	while (arg[*i] == ' ' || arg[*i] == '+')
		(*i)++;
	if ((arg[*i] == 'd' || arg[*i] == 'i'))
	{
		if (nb >= 0 && arg[*i - 1] == ' ')
		{
			r += write(1, " ", 1);
			r += ft_putnbr(nb);
		}
		else if (nb >= 0 && arg[*i - 1] == '+')
		{
			r += write(1, "+", 1);
			r += ft_putnbr(nb);
		}
		else
			r += ft_putnbr(nb);
	}
	return (r);
}
