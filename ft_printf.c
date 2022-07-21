/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:15:10 by rajacque          #+#    #+#             */
/*   Updated: 2022/07/21 14:24:48 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_formats(va_list args, const char format, int *print_length)
{
	if (format == 'c')
		ft_printchar(va_arg(args, int), print_length);
	else if (format == 's')
		ft_printstr(va_arg(args, char *), print_length);
	else if (format == 'p')
	{
		*print_length += 2;
		write(1, "0x", 2);
		ft_putnbr_base(va_arg(args, unsigned long), format, print_length);
	}
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), print_length);
	else if (format == 'u')
		print_unsigned(va_arg(args, unsigned int), print_length);
	else if (format == 'x' || format == 'X')
		ft_putnbr_base(va_arg(args, unsigned long), format, print_length);
	else if (format == '%')
		*print_length += ft_percent();
	return (*print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			find_formats(args, str[i + 1], &print_length);
			i++;
		}
		else
			ft_printchar(str[i], &print_length);
		i++;
	}
	va_end(args);
	return (print_length);
}
