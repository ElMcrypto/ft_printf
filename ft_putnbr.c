/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:58:48 by eelmoham          #+#    #+#             */
/*   Updated: 2021/12/08 18:50:16 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long n, int *count)
{
	long long	x;

	x = n;
	if (x < 0)
	{
		x = -x;
		write(1, "-", 1);
		*count = *count + 1;
	}
	if (x <= 9)
	{
		x = x + '0';
		write(1, &x, 1);
		*count = *count + 1;
	}
	else
	{
		ft_putnbr(x / 10, count);
		ft_putnbr(x % 10, count);
	}
}
