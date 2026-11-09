/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:07:23 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:26 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "bonjour";

	printf("ft_memchr = %s \n", (char *)ft_memchr(str, 'j', 7));
	printf("ft_memchr = %s \n", (char *)ft_memchr(str, 'z', 7));

	char	chaine[] = "bonjour";

	printf("memchr = %s \n", (char *)memchr(chaine, 'j', 7));
	printf("memchr = %s \n", (char *)memchr(chaine, 'z', 7));

	return (0);
}*/