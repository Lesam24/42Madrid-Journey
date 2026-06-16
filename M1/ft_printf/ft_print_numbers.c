/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 21:27:20 by samsanch          #+#    #+#             */
/*   Updated: 2026/06/06 21:27:21 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_uint_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_putunsigned_nbr_fd(unsigned int n, int fd)
{
	unsigned char	c;

	if (n >= 10)
	{
		ft_putunsigned_nbr_fd(n / 10, fd);
	}
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

int	ft_print_num(int nb)
{
	char	*temp;
	size_t	len;

	ft_putnbr_fd(nb, 1);
	temp = ft_itoa(nb);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}

int	ft_print_unsigned_num(unsigned int nb)
{
	unsigned int	result;

	result = ((4294967295ULL + 1) + nb);
	ft_putunsigned_nbr_fd(result, 1);
	return (ft_get_uint_len(result));
}
