/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:55:40 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:10:54 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16, len);
	ft_putchar(base[n % 16], len);
}
