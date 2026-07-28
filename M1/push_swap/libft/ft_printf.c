/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:33:11 by danipere          #+#    #+#             */
/*   Updated: 2026/07/03 13:59:28 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_flag(char flag, va_list list)
{
	if (flag == '%')
		return (ft_putchar_fd('%', 1), 1);
	if (flag == 'c')
		return (ft_putchar_fd(va_arg(list, int), 1), 1);
	if (flag == 's')
		return (ft_putstr_fd(va_arg(list, char *), 1));
	if (flag == 'p')
		return (ft_print_mem(va_arg(list, unsigned long)));
	if (flag == 'd' || flag == 'i')
		return (ft_print_free(ft_nbrbase(va_arg(list, int), BASE_TEN), 1));
	if (flag == 'x')
		return (ft_print_free(ft_unbrbase(va_arg(list, unsigned int),
					BASE_HEX), 1));
	if (flag == 'u')
		return (ft_print_free(ft_unbrbase(va_arg(list, unsigned int),
					BASE_TEN), 1));
	if (flag == 'X')
		return (ft_print_free(ft_unbrbase(va_arg(list, unsigned int),
					BASE_UPPERHEX),
				1));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		res;
	va_list	list;

	va_start(list, str);
	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '%')
			res += process_flag(str[++i], list);
		else
		{
			ft_putchar_fd(str[i], 1);
			res++;
		}
		i++;
	}
	return (res);
}
