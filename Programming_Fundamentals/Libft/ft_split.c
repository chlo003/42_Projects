/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:45:28 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:59 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

static void	free_split(char **split, int count)
{
	while (count >= 0)
		free(split[count--]);
	free(split);
}

static int	ft_fill_split(char **split, char const *s, char c)
{
	int	i;
	int	start;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		if (start > 0)
		{
			split[i] = ft_substr(s, 0, start);
			if (!split[i++])
				return (0);
		}
		s += start;
	}
	split[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;

	count = ft_countword(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	if (!ft_fill_split(split, s, c))
	{
		free_split(split, count);
		return (NULL);
	}
	return (split);
}
/*
int main(int ac, char **av)
{   
    int i = 0;
    char **split = ft_split(av[1], av[2][0]);
    while(split[i])
    {
        printf("%d\t%s\n", i, split[i]);
        i++;
    }
    return (0);
}*/