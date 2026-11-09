/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 20:24:32 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:31 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*ap;
	const unsigned char		*av;

	av = (const unsigned char *)src;
	ap = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ap[i] = av[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char    av[] = "Tu vas y arriver !";
    char    ap[sizeof(av)] = "";
    
    ft_memcpy(ap, av, 3);
    printf("ft_memcpy = %s \n", ap);

    memcpy(ap, av, 3);
    printf("memcpy = %s \n", ap);
    return (0);
}*/