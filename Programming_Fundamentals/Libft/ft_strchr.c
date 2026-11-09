/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:19:57 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:03:02 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello";

	printf("ft_strchr = %s \n", ft_strchr(str, 'l'));

	char	chaine[]= "Hello";

	printf("strchr = %s \n", strchr(chaine, 'l'));

	return (0);
}*/