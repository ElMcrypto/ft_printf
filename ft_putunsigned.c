/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:57:52 by eelmoham          #+#    #+#             */
/*   Updated: 2021/12/08 19:10:46 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignedlongint(unsigned long long x, char *base, int *count)
{
	unsigned long long	div;
	unsigned long long	mod;

	div = x / 16;
	mod = x % 16;
	if (x < 16)
	{
		write(1, &base[mod], 1);
		*count = *count + 1;
	}
	else
	{
		ft_putunsignedlongint(div, base, count);
		ft_putunsignedlongint(mod, base, count);
	}
}
