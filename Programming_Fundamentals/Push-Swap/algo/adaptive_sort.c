/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:47:51 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/03 13:29:17 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small(t_list **a, t_bench *bench, int size)
{
	if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a, bench);
	}
	else if (size == 3)
		sort_three(a, bench);
}

void	sort_by_disorder(t_list **a, t_list **b,
		t_bench *bench, double disorder)
{
	if (disorder < 0.2)
	{
		bench->strategy = SIMPLE;
		selection_sort(a, b, bench);
	}
	else if (disorder < 0.5)
	{
		bench->strategy = MEDIUM;
		assign_index(*a);
		chunk_sort(a, b, bench);
	}
	else
	{
		bench->strategy = COMPLEX;
		assign_index(*a);
		radix_sort(a, b, bench);
	}
}

void	adaptive_sort(t_list **a, t_list **b, t_bench *bench)
{
	double	disorder;
	int		size;

	size = stack_size(*a);
	disorder = get_disorder(*a);
	if (size <= 1)
		return ;
	if (size <= 3)
		sort_small(a, bench, size);
	else
		sort_by_disorder(a, b, bench, disorder);
}
