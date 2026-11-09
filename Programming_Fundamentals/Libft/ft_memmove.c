/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:52:21 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:33 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ap;
	unsigned char	*av;

	ap = (unsigned char *)dest;
	av = (unsigned char *)src;
	if (ap > av)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ap[i] = av[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ap[i] = av[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "ABCDE";
	char	s2[] = "ABCDE";

	ft_memmove(s1 + 1, s1, 4);
	printf("ft_memmove = %s \n", s1);

	memmove(s2 + 1, s2, 4);
	printf("memmove = %s \n", s2);
	return (0);
}*/