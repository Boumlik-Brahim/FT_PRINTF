/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:51:32 by bbrahim           #+#    #+#             */
/*   Updated: 2021/12/14 11:03:01 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	ft_tst_flags(va_list list, const char *arg, int *i)
{
	int	r;

	r = 0;
	if (arg[*i] == '+' || arg[*i] == ' ')
		r += ft_ps_flags(list, arg, i);
	else if (arg[*i] == '#')
		r += ft_sh_flags(list, arg, i);
	return (r);
}

int	ft_printf(const char *arg, ...)
{
	int		i;
	int		r;
	va_list	vlist;

	r = 0;
	if (!arg)
		return (0);
	va_start(vlist, arg);
	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == '%')
		{
			i++;
			if (arg[i] == '+' || arg[i] == ' ' || arg[i] == '#')
				r += ft_tst_flags(vlist, arg, &i);
			else
				r += ft_specifiers(vlist, arg[i]);
		}
		else
			r += ft_putchar(arg[i]);
		i++;
	}
	va_end(vlist);
	return (r);
}
