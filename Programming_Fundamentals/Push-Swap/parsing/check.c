/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 14:22:50 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/07/10 16:20:06 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// vérifie si doublon
int	has_duplicate(t_list *stack)
{
	t_list	*check;

	while (stack)
	{
		check = stack->next;
		while (check)
		{
			if (stack->value == check->value)
				return (1);
			check = check->next;
		}
		stack = stack->next;
	}
	return (0);
}

// vérifie si la liste est triée en ordre croissant
int	is_sorted(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
