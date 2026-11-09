/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:32:05 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:03:28 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = (char *)(s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (last);
}
/*
#include <stdio.h>

int main(void)
{
    char    str[] = "Hello";

    printf("ft_strrchr = %s \n", ft_strrchr(str, 'e'));

    char    chaine[] = "Hello";

    printf("strrchr = %s \n", strrchr(chaine, 'e'));
    return (0);
}*/