/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:00:01 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:01:49 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	convert(long n, char *result, int len)
{
	int	index;
	int	is_negative;

	is_negative = (n < 0);
	if (is_negative)
		n = -n;
	index = len - 1;
	result[index--] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[index--] = n % 10 + '0';
		n = n / 10;
	}
	if (is_negative)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = count_digit(n) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	convert(n, s, len);
	s[len - 1] = '\0';
	return (s);
}
/*
int main(void)
{
    printf("%s\n", ft_itoa(2147483647));
    return (0);
}*/