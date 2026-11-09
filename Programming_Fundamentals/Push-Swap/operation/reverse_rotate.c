/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:07:43 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:09:58 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*prev;
	t_list	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **a, t_bench *bench)
{
	reverse_rotate(a);
	if (bench->enabled)
	{
		bench->rra++;
		bench->total_ops++;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_list **b, t_bench *bench)
{
	reverse_rotate(b);
	if (bench->enabled)
	{
		bench->rrb++;
		bench->total_ops++;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b, t_bench *bench)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (bench->enabled)
	{
		bench->rrr++;
		bench->total_ops++;
	}
	write(1, "rrr\n", 4);
}
