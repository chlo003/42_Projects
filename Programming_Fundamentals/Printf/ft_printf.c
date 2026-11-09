/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:17:31 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/14 20:26:05 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkp(va_list ap)
{
	int				count;
	unsigned long	n;

	count = 0;
	n = va_arg(ap, unsigned long);
	if (n)
		count += ft_putstr("0x");
	count += ft_printp(n);
	return (count);
}

int	ft_condi(char s, va_list ap)
{
	size_t	count;

	count = 0;
	if (s == '%')
		count += ft_putchar('%');
	else if (s == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (s == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (s == 'p')
		count += ft_checkp(ap);
	else if (s == 'd' || s == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (s == 'u')
		count += ft_putnbr(va_arg(ap, unsigned int));
	else if (s == 'x')
		count += ft_printhex(va_arg(ap, unsigned int), 'x');
	else if (s == 'X')
		count += ft_printhex(va_arg(ap, unsigned int), 'X');
	else if (s == 'a')
		count += ft_word(va_arg(ap, char *));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	size_t	count;
	va_list	ap;

	va_start(ap, s);
	count = 0;
	i = 0;
	if (!s)
		return (count);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			count += ft_condi(s[++i], ap);
		else
		{
			write(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
int	main(void)
{
	int	n = 12345;

	ft_printf("my ft_printf : %c %s %p %d %i %u %x %X %% Hello %a World\n",
		'a', "Paris", &n, 14, 20, 654321, 127, 127);
	printf("origi printf : %c %s %p %d %i %u %x %X %% %a\n",
		'a', "Paris", &n, 14, 20, 654321, 127, 127);
	return (0);
}