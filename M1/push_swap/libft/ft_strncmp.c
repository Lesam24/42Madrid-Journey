/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:02:57 by danipere          #+#    #+#             */
/*   Updated: 2026/06/29 18:39:00 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	i = 0;
	while (big[i] || little[i])
	{
		if (little[i] != big[i] && i < len)
			return ((unsigned char)big[i] - (unsigned char)little[i]);
		i++;
	}
	return (0);
}
