/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:35:47 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/23 12:43:21 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (unsigned int)i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* Test Function
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "Hello World";
	char b[] = "Hello Wo ";
	printf("La primera palabra es: %s\n", a);
	printf("La segunda palabra es: %s\n", b);
	printf("Diferencia entre strings: %i\n", ft_strncmp(a, b, 9));
	printf("Función real: %i\n", strncmp(a, b, 9));
	return (0);
} */
