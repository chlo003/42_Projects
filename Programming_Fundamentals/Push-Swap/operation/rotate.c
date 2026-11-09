/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:38:04 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:09:50 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
}

void	ra(t_list **a, t_bench *bench)
{
	rotate(a);
	if (bench->enabled)
	{
		bench->ra++;
		bench->total_ops++;
	}
	write(1, "ra\n", 3);
}

void	rb(t_list **b, t_bench *bench)
{
	rotate(b);
	if (bench->enabled)
	{
		bench->rb++;
		bench->total_ops++;
	}
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b, t_bench *bench)
{
	rotate(a);
	rotate(b);
	if (bench->enabled)
	{
		bench->rr++;
		bench->total_ops++;
	}
	write(1, "rr\n", 3);
}
