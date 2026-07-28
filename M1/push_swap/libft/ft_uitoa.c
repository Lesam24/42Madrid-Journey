/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 01:03:00 by danipere          #+#    #+#             */
/*   Updated: 2026/06/29 23:21:21 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_unsigned_intlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static char	*convert_nbr(unsigned int n, char *st, int index)
{
	if (n >= 10)
		convert_nbr(n / 10, st, index - 1);
	st[index] = (n % 10) + '0';
	return (st);
}

char	*ft_uitoa(unsigned int n)
{
	int		size;
	char	*str;

	size = ft_unsigned_intlen(n);
	str = malloc((1 + size) * sizeof(char));
	if (!str)
		return (0);
	str[size] = 0;
	return (convert_nbr(n, str, size - 1));
}
