/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:35:40 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 15:00:28 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_list **a, t_list **b, t_bench *bench, int strategy)
{
	if (strategy == SIMPLE)
	{
		bench->strategy = SIMPLE;
		selection_sort(a, b, bench);
	}
	else if (strategy == MEDIUM)
	{
		bench->strategy = MEDIUM;
		assign_index(*a);
		chunk_sort(a, b, bench);
	}
	else if (strategy == COMPLEX)
	{
		bench->strategy = COMPLEX;
		assign_index(*a);
		radix_sort(a, b, bench);
	}
	else
	{
		bench->strategy = ADAPTIVE;
		adaptive_sort(a, b, bench);
	}
}
