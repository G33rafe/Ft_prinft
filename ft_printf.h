/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:11:48 by rajacque          #+#    #+#             */
/*   Updated: 2022/07/21 14:22:43 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printstr(char *str, int *print_lenght);

int		ft_printchar(int c, int *print_length);

int		ft_putnbr(int nb, int *print_length);

int		ft_percent(void);

int		find_formats(va_list args, const char format, int *print_length);

int		print_unsigned(unsigned int n, int *print_lenght);

int		ft_printf(const char *str, ...);

int		ft_putnbr_unsigned(unsigned int nb, int *print_length);

void	ft_putnbr_base(unsigned long nb, char format, int *print_length);

#endif