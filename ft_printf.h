/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:49:09 by eelmoham          #+#    #+#             */
/*   Updated: 2021/12/08 19:14:12 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(long long n, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr_base(int nbr, char *base, int *count);
void	ft_putunsignedlongint(unsigned long long nbr, char *base, int *count);

#endif
