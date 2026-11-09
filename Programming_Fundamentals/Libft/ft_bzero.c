/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:27:52 by chlminga          #+#    #+#             */
/*   Updated: 2026/05/07 08:42:15 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bonjour toi !";
	size_t	i = 0;

	printf("Avant bzero = %s \n", str);
	ft_bzero(str, 8);
	while (i < sizeof(str))
	{
		printf("[%c]", str[i]);
		i++;
	}
	return (0);
}*/