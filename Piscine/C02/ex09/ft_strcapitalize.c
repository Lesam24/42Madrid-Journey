/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:35:20 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/27 15:52:33 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	if (letter >= 'a' && letter <= 'z')
		return (1);
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - ('A' - 'a');
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (i != 0 && ft_alpha(str[i -1]) == 0 && ft_alpha(str[i]) == 1)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
/* Test Function
#include <stdio.h>

int	main(void)
{
	char str[]="salut, coMmEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
} */
