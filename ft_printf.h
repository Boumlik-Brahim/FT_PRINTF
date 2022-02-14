/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:59:25 by bbrahim           #+#    #+#             */
/*   Updated: 2021/12/14 11:36:27 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(long int nb);
int	ft_u_putnbr(unsigned int nb);
int	ft_lx_puthnbr(unsigned int nb);
int	ft_ux_puthnbr(unsigned int nb);
int	ft_putnbr_ptr(unsigned long int nb);

int	ft_putchar(char c);
int	ft_intlen(long int a);
int	ft_hx_intlen(unsigned long int a);
int	ft_putstr(char *str);
int	ft_specifiers(va_list	list, char c);

int	ft_sh_flags(va_list list, const char *arg, int *i);
int	ft_ps_flags(va_list list, const char *arg, int *i);

int	ft_tst_flags(va_list	list, const char *arg, int *i);
int	ft_printf(const char *arg, ...);

#endif
