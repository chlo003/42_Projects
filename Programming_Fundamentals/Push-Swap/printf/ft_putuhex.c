/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:56:09 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:11:00 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuhex(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_putuhex(n / 16, len);
	ft_putchar(base[n % 16], len);
}
