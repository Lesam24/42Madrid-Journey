/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrbase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:43:13 by danipere          #+#    #+#             */
/*   Updated: 2026/07/01 14:35:11 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrbase_len(unsigned long nbr, unsigned long based)
{
	int	count;

	if (!nbr)
		return (1);
	count = 0;
	while (nbr > 0)
	{
		nbr = nbr / based;
		count++;
	}
	return (count);
}

char	*ft_unbrbase(unsigned long nbr, char *base)
{
	int				rem;
	char			*res;
	int				nbr_len;
	int				i;
	unsigned long	based;

	i = 0;
	based = ft_strlen(base);
	nbr_len = nbrbase_len(nbr, based);
	res = malloc((nbr_len + 1) * sizeof(char));
	while (i < nbr_len)
	{
		rem = nbr % based;
		nbr = nbr / based;
		res[i] = base[rem];
		i++;
	}
	res[i] = 0;
	ft_strreverse(res);
	return (res);
}
