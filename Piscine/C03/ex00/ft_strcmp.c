/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:15:37 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/23 12:44:54 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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
	printf("Diferencia entre strings: %i\n", ft_strcmp(a, b));
	printf("Diferencia con funcion real: %i\n", strcmp(a, b));
	return (0);
} */
