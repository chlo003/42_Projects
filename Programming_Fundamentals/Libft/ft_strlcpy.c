/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:20:48 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:03:16 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src = "To infinity";
	char	dst[20];

	printf("%ld \n", ft_strlcpy(dst, src, 19));
	printf("dst = %s \n", dst);

	char	*s1 = "To infinity";
	char	d1[20];

	printf("%ld \n", strlcpy(d1, s1, 19));
	printf("d1 = %s \n", d1);
	return (0);
}*/