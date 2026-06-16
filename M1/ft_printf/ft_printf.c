/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 12:02:36 by samsanch          #+#    #+#             */
/*   Updated: 2026/06/05 12:02:38 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_num(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned_num(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hexlower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_print_hexupper(va_arg(args, unsigned int)));
	else if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%')
		{
			i++;
			len = len + ft_select_format(format[i], args);
		}
		else
			len = len + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
