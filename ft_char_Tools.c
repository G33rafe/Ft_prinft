/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_Tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:18:07 by rajacque          #+#    #+#             */
/*   Updated: 2022/07/21 14:15:21 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c, int *print_length)
{
	write(1, &c, 1);
	(*print_length)++;
	return (*print_length);
}

int	ft_printstr(char *str, int *print_lenght)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*print_lenght += 6;
	}
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			(*print_lenght)++;
		}
	}
	return (*print_lenght);
}

int	ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}
