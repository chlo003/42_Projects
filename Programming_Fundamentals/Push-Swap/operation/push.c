/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:31:59 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:10:09 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_list **a, t_list **b, t_bench *bench)
{
	push(b, a);
	if (bench->enabled)
	{
		bench->pa++;
		bench->total_ops++;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b, t_bench *bench)
{
	push(a, b);
	if (bench->enabled)
	{
		bench->pb++;
		bench->total_ops++;
	}
	write(1, "pb\n", 3);
}
