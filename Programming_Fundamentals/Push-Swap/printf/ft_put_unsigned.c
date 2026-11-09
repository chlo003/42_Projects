/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:55:05 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:10:49 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int n, int *len)
{
	if (n >= 10)
		ft_put_unsigned(n / 10, len);
	ft_putchar((n % 10) + '0', len);
}
