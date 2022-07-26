/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_Tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:26:35 by rajacque          #+#    #+#             */
/*   Updated: 2022/07/26 13:20:51 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int *print_length)
{
	if (nb == -2147483648)
	{
		ft_printchar('-', print_length);
		ft_printchar('2', print_length);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_printchar('-', print_length);
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_printchar(nb + 48, print_length);
	}
	else
	{
		ft_putnbr(nb / 10, print_length);
		ft_putnbr(nb % 10, print_length);
	}
	return (*print_length);
}

int	ft_putnbr_unsigned(unsigned int nb, int *print_length)
{
	if (nb < 10)
	{
		ft_printchar(nb + 48, print_length);
	}
	else
	{
		ft_putnbr_unsigned(nb / 10, print_length);
		ft_putnbr_unsigned(nb % 10, print_length);
	}
	return (*print_length);
}

int	print_unsigned(unsigned int n, int *print_length)
{
	if (n == 0)
		ft_printchar('0', print_length);
	else
	{
		ft_putnbr_unsigned(n, print_length);
	}
	return (*print_length);
}

void	ft_putnbr_base(unsigned long nb, char format, int *print_length)
{
	if (nb >= 16)
	{
		ft_putnbr_base(nb / 16, format, print_length);
		ft_putnbr_base(nb % 16, format, print_length);
	}
	else
	{
		if (nb <= 9)
			ft_printchar((nb + '0'), print_length);
		else
		{
			if (format == 'x' || format == 'p')
				ft_printchar(nb - 10 + 'a', print_length);
			if (format == 'X')
				ft_printchar(nb - 10 + 'A', print_length);
		}
	}
}
