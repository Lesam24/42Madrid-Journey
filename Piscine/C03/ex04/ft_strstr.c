/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:13:48 by samsanch          #+#    #+#             */
/*   Updated: 2026/04/28 02:01:55 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		t = to_find;
		while (*t != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strstr("Hola Mundo", "Mu"));
} */
