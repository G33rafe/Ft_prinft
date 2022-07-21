/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:33:21 by rajacque          #+#    #+#             */
/*   Updated: 2022/07/21 15:03:09 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	originalPrintfLen;
	int	MyPrintfLen;
	char	*str;

	str = "";
	originalPrintfLen = printf("%sBonjour  %p", str, str);
	MyPrintfLen = ft_printf("%sBonjour  %p", str, str);
	printf("original len :%i\n\nmy len : %i",originalPrintfLen, MyPrintfLen);
	return (0);
}

