/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:26:41 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 14:17:03 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Pour calculer le nombre chiffre dans un chunk
int	length_chunk(int n) //sqrt
{
	int	x;

	x = n;
	while ((x * x) > n)
		x = (x + (n / x)) / 2;
	return (x);
}

void	chunk_sort(t_list **a, t_list **b, t_bench *bench)
{
	int	nb_chunk;
	int	pos_chunk;
	int	id_max;
	int	id_min;
	int	chunk_size;

	pos_chunk = 0;
	chunk_size = length_chunk(stack_size(*a));
	nb_chunk = stack_size(*a) / chunk_size + 1;
	while (pos_chunk < nb_chunk)
	{
		id_min = chunk_size * pos_chunk;
		id_max = id_min + chunk_size;
		while (stack_size(*a) > 0)
		{
			if ((*a)->index >= id_min && (*a)->index < id_max)
				pb(a, b, bench);
			else
				ra(a, bench);
			if (stack_size(*b) == id_max)
				break ;
		}
		pos_chunk++;
	}
	empty_b(a, b, bench);
}

//Cherche dans la stack_B le plus grand nombre,
// je le deplace a la tete de la stack
// puis je le push dans A, sinon je rotate.
void	sort_back(t_list **a, t_list **b, t_bench *bench)
{
	int	max_pos;
	int	size;

	max_pos = find_max_position(*b);
	size = stack_size(*b);
	if (max_pos <= size / 2)
	{
		while (max_pos-- > 0)
			rb(b, bench);
	}
	else
	{
		max_pos = size - max_pos;
		while (max_pos-- > 0)
			rrb(b, bench);
	}
	pa(a, b, bench);
}

// je recommence jusqu'a ce que B soit vide.
void	empty_b(t_list **a, t_list **b, t_bench *bench)
{
	while (stack_size(*b) > 0)
		sort_back(a, b, bench);
}
