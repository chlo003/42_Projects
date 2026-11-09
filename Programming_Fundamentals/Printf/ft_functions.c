/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:17:45 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/14 20:23:59 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (count = 6);
	}
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}

int	ft_putnbr(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_printhex(unsigned long n, char c)
{
	int		count;
	char	*hexa;

	count = 0;
	if (!n && c == 'p')
		return (ft_putstr("(nil)"));
	else if (c == 'x' || c == 'p')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	if (n > 15)
		count += ft_printhex(n / 16, c);
	count += ft_putchar(hexa[n % 16]);
	return (count);
}

int	ft_printp(unsigned long n)
{
	int		count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (!n)
		return (count += ft_putstr("(nil)"));
	if (n > 15)
		count += ft_printp(n / 16);
	count += ft_putchar(hexa[n % 16]);
	return (count);
}
int	ft_word(char *s)
{
	int	count;

	count = 0;
	write(1, "Amazing 42", 10);
	return (count);
}