/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:46:37 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/27 18:12:08 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* Test Function
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hola";
	char s3[] = "Hola";
	char s2[] = " Mundo";
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s3, s2));
	return (0);
} */
