/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 14:30:41 by samsanch          #+#    #+#             */
/*   Updated: 2026/06/05 14:30:42 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	if (!str)
		return (ft_putstr_fd("(null)", 1), 6);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	result;
	int				len;

	len = 0;
	result = (unsigned long)ptr;
	if (result == 0)
		len = write(1, "(nil)", 5);
	else
	{
		write(1, "0x", 2);
		len = 2 + ft_print_hex_pointer(result);
	}
	return (len);
}

int	ft_print_hexlower(unsigned int nb)
{
	char	temp;
	int		len;

	len = 0;
	if (nb >= 16)
		len = len + ft_print_hexlower(nb / 16);
	temp = ft_hex_lower(nb % 16);
	write(1, &temp, 1);
	len++;
	return (len);
}

int	ft_print_hexupper(unsigned int nb)
{
	char	temp;
	int		len;

	len = 0;
	if (nb >= 16)
		len = len + ft_print_hexupper(nb / 16);
	temp = ft_hex_upper(nb % 16);
	write(1, &temp, 1);
	len++;
	return (len);
}
