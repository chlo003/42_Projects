/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:45:50 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:59:46 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	move_min_to_top(t_list **a, int pos, int size, t_bench *bench)
{
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			ra(a, bench);
			pos--;
		}
	}
	else
	{
		pos = size - pos;
		while (pos > 0)
		{
			rra(a, bench);
			pos--;
		}
	}
}

void	selection_sort(t_list **a, t_list **b, t_bench *bench)
{
	int	pos;
	int	size;

	while (stack_size(*a) > 1)
	{
		pos = find_min_position(*a);
		size = stack_size(*a);
		move_min_to_top(a, pos, size, bench);
		pb(a, b, bench);
	}
	while (*b)
		pa(a, b, bench);
}
