/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:21:23 by bbrahim           #+#    #+#             */
/*   Updated: 2021/12/14 11:13:59 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_intlen(long int a)
{
	int	i;

	i = 0;
	if (a <= 0)
		i++;
	while (a)
	{
		i++;
		a = a / 10;
	}
	return (i);
}

int	ft_hx_intlen(unsigned long int a)
{
	int	i;

	i = 0;
	if (a == 0)
		i++;
	while (a)
	{
		i++;
		a = a / 16;
	}
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_specifiers(va_list	list, char c)
{
	int	r;

	r = 0;
	if (c == 'c')
		r = ft_putchar(va_arg(list, int));
	else if (c == 's')
		r = ft_putstr(va_arg(list, char *));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		r = ft_putnbr_ptr(va_arg(list, unsigned long int));
	}
	else if (c == 'd' || c == 'i')
		r = ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		r = ft_u_putnbr(va_arg(list, int));
	else if (c == 'x')
		r = ft_lx_puthnbr(va_arg(list, int));
	else if (c == 'X')
		r = ft_ux_puthnbr(va_arg(list, int));
	else if (c == '%')
		r = ft_putchar('%');
	else
		r = ft_putchar(c);
	return (r);
}
