/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:05:18 by eelmoham          #+#    #+#             */
/*   Updated: 2021/12/08 21:27:40 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_format(va_list args, char c, int *count)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == '%')
	{
		write (1, "%", 1);
		*count = *count + 1;
	}
	else if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef", count);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), count);
	else if (c == 'p')
	{
		*count += write(1, "0x", 2);
		ft_putunsignedlongint(va_arg(args, unsigned long long),
			"0123456789abcdef", count);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i = i + 1;
			check_format(args, str[i], &count);
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end (args);
	return (count);
}
