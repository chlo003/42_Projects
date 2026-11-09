/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:46:05 by chlminga          #+#    #+#             */
/*   Updated: 2026/05/14 18:05:39 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkset(char c, char const *set)
{
	unsigned int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		end;

	start = 0;
	while (s1[start] && checkset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && checkset(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, (end - start)));
}
/*
int	main(void)
{
	char	string[] = "ababa";
	char	set[] = "a";

	printf("%s", ft_strtrim(string, set));
	return (0);
}*/