/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:37:33 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 15:08:18 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_number(t_list *a, char *str)
{
	long	nb;

	if (!is_valid_number(str))
	{
		write(2, "Error\n", 6);
		free_stack(a);
		return (1);
	}
	nb = ft_atoi(str);
	if (nb < -2147483648 || nb > 2147483647)
	{
		write(2, "Error\n", 6);
		free_stack(a);
		return (1);
	}
	return (0);
}
