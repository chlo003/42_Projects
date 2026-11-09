/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:55:15 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:10:51 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex_addr(unsigned long n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_addr(n / 16, len);
	ft_putchar(base[n % 16], len);
}

void	ft_putaddr(void *ptr, int *len)
{
	unsigned long	addr;

	if (!ptr)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	addr = (unsigned long)ptr;
	ft_putstr("0x", len);
	ft_puthex_addr(addr, len);
}
