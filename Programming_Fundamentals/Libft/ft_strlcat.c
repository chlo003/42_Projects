/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:17:36 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:03:14 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	if ((dst == NULL || src == NULL) && size == 0)
		return (0);
	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	slen = ft_strlen(src);
	if (size == dlen)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int	main (void)
{
	char	dest[30];
	char	*src = (char *)"AAAAAAAAA";
	
	memset(dest, 'B', 4);
	printf("%ld \n", ft_strlcat(dest, src, 6));
	return (0);
}*/