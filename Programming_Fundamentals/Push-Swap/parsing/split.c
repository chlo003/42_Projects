/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:36:27 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:16:23 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
	}
	return (count);
}

char	*word_dup(char *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		if (i > start)
			res[j++] = word_dup(str, start, i);
	}
	res[j] = NULL;
	return (res);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
