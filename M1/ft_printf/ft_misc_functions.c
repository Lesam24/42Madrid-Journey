/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_misc_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:58:22 by samsanch          #+#    #+#             */
/*   Updated: 2026/06/08 13:58:23 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_hex_lower(unsigned int nb)
{
	char	*lower;

	lower = "0123456789abcdef";
	return (lower[nb]);
}

char	ft_hex_upper(unsigned int nb)
{
	char	*upper;

	upper = "0123456789ABCDEF";
	return (upper[nb]);
}

int	ft_print_hex_pointer(unsigned long nb)
{
	char	temp;
	int		len;

	len = 0;
	if (nb >= 16)
		len = len + ft_print_hex_pointer(nb / 16);
	temp = ft_hex_lower(nb % 16);
	write(1, &temp, 1);
	len++;
	return (len);
}
