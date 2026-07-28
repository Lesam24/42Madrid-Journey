/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 01:03:00 by danipere          #+#    #+#             */
/*   Updated: 2026/07/06 15:03:27 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_nbr(long n, char *st, int index)
{
	if (n >= 10)
		convert_nbr(n / 10, st, index - 1);
	st[index] = (n % 10) + '0';
	return (st);
}

char	*ft_itoa(int n)
{
	int		size;
	int		negative;
	long	nb;
	char	*str;

	nb = (long)n;
	negative = 0;
	if (nb < 0)
		negative++;
	size = ft_intlen(nb);
	str = malloc((1 + size + negative) * sizeof(char));
	if (!str)
		return (0);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[size + negative] = 0;
	return (convert_nbr(nb, str, (size + negative) - 1));
}
