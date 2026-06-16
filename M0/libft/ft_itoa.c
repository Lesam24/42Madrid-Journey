/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:24:39 by samsanch          #+#    #+#             */
/*   Updated: 2026/05/25 13:24:40 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_reverse(char *str, int len)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	if (str[start] == '-')
		start++;
	end = len - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}

static int	ft_get_int_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		i;

	i = 0;
	nb = n;
	result = malloc(sizeof(char) * (ft_get_int_len(n) + 1));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[i] = '-';
		nb = -nb;
		i++;
	}
	while ((nb / 10) > 0)
	{
		result[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if ((nb / 10) == 0)
		result[i++] = nb % 10 + '0';
	ft_reverse(result, ft_get_int_len(n));
	result[i] = '\0';
	return (result);
}
