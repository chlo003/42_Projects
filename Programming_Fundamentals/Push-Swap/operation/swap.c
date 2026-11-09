/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:31:37 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:09:16 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	int		temp;
	t_list	*current;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	current = *stack;
	temp = current->value;
	current->value = current->next->value;
	current->next->value = temp;
}

void	sa(t_list **a, t_bench *bench)
{
	swap(a);
	if (bench->enabled)
	{
		bench->sa++;
		bench->total_ops++;
	}
	write(1, "sa\n", 3);
}

void	sb(t_list **b, t_bench *bench)
{
	swap(b);
	if (bench->enabled)
	{
		bench->sb++;
		bench->total_ops++;
	}
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b, t_bench *bench)
{
	swap(a);
	swap(b);
	if (bench->enabled)
	{
		bench->ss++;
		bench->total_ops++;
	}
	write(1, "ss\n", 3);
}
