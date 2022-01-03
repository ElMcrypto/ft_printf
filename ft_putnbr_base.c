/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:53:27 by eelmoham          #+#    #+#             */
/*   Updated: 2021/12/08 02:47:53 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	unsigned int	x;
	int				div;
	int				mod;

	x = nbr;
	if (x < 0)
	{
		x *= -1;
		write(1, "-", 1);
		*count = *count + 1;
	}
	div = x / 16;
	mod = x % 16;
	if (x < 16)
	{
		write(1, &base[mod], 1);
		*count = *count + 1;
	}
	else
	{
		ft_putnbr_base(div, base, count);
		ft_putnbr_base(mod, base, count);
	}
}
