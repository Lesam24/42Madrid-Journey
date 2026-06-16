/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:22:12 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/23 18:23:40 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}
/* Test Function
#include <stdio.h>

int	main(void)
{
	char str1[] = "OH QUE PEDAZO PRUEBA";
	printf("%s\n", ft_strlowcase(str1));
	return (0);
} */
