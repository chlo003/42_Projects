/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:51:33 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 15:09:19 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*get_strategy_name(int strategy)
{
	if (strategy == SIMPLE)
		return ("Simple / O(n²)");
	else if (strategy == MEDIUM)
		return ("Medium / O(n√n)");
	else if (strategy == COMPLEX)
		return ("Complex / O(n log n)");
	return ("Adaptive");
}

int	get_strategy(char *arg, int *strategy, t_bench *bench)
{
	if (!strcmp(arg, "--bench"))
	{
		bench->enabled = 1;
		return (1);
	}
	else if (!strcmp(arg, "--simple"))
		*strategy = SIMPLE;
	else if (!strcmp(arg, "--medium"))
		*strategy = MEDIUM;
	else if (!strcmp(arg, "--complex"))
		*strategy = COMPLEX;
	else if (!strcmp(arg, "--adaptive"))
		*strategy = ADAPTIVE;
	else
		return (0);
	return (1);
}

void	print_bench(t_bench *bench, double disorder)
{
	if (!bench->enabled)
		return ;
	ft_printf("[bench] disorder: %d%%\n",
		(int)(disorder * 100));
	ft_printf("[bench] strategy: %s\n",
		get_strategy_name(bench->strategy));
	ft_printf("[bench] total_ops: %d\n",
		bench->total_ops);
	ft_printf("[bench] sa:%d sb:%d ss:%d pa:%d pb:%d\n",
		bench->sa, bench->sb, bench->ss,
		bench->pa, bench->pb);
	ft_printf("[bench] ra:%d rb:%d rr:%d rra:%d rrb:%d rrr:%d\n",
		bench->ra, bench->rb, bench->rr,
		bench->rra, bench->rrb, bench->rrr);
}
