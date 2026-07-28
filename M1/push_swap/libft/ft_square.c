/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danipere <danipere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:35:02 by danipere          #+#    #+#             */
/*   Updated: 2026/07/06 18:34:39 by danipere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_square(double n)
{
	double	root;

	if (n < 0)
		return (-1.0);
	if (n == 0 || n == 1)
		return (n);
	root = n / 2.0;
	while ((root * root - n) > 0.000001)
	{
		root = 0.5 * (root + (n / root));
	}
	return (root);
}
