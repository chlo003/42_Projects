/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:38:15 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/03 12:30:24 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "printf/ft_printf.h"

# define SIMPLE 1
# define MEDIUM 2
# define COMPLEX 3
# define ADAPTIVE 4

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_list;

typedef struct s_bench
{
	int	enabled;
	int	strategy;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total_ops;
}	t_bench;

/* parsing */

int		is_valid_number(char *str);
long	ft_atoi(char *str);
char	**ft_split(char *s);
void	free_split(char **split);

/* list */

t_list	*create_node(int value);
void	add_number(t_list **stack, int value);
void	free_stack(t_list *stack);
int		stack_size(t_list *stack);

/* check */

int		has_duplicate(t_list *stack);
int		is_sorted(t_list *stack);

/* utils */

void	print_stack(char *name, t_list *stack);

/* operations */

void	swap(t_list **stack);
void	push(t_list **src, t_list **dst);
void	rotate(t_list **stack);
void	reverse_rotate(t_list **stack);

/* operations bench */

void	sa(t_list **a, t_bench *bench);
void	sb(t_list **b, t_bench *bench);
void	ss(t_list **a, t_list **b, t_bench *bench);

void	pa(t_list **a, t_list **b, t_bench *bench);
void	pb(t_list **a, t_list **b, t_bench *bench);

void	ra(t_list **a, t_bench *bench);
void	rb(t_list **b, t_bench *bench);
void	rr(t_list **a, t_list **b, t_bench *bench);

void	rra(t_list **a, t_bench *bench);
void	rrb(t_list **b, t_bench *bench);
void	rrr(t_list **a, t_list **b, t_bench *bench);

/* algorithms */

double	get_disorder(t_list *stack);

void	selection_sort(t_list **a, t_list **b, t_bench *bench);
int		find_min_position(t_list *stack);

void	empty_b(t_list **a, t_list **b, t_bench *bench);
void	chunk_sort(t_list **a, t_list **b, t_bench *bench);
int		find_max_position(t_list *stack);

void	assign_index(t_list *a);

void	radix_sort(t_list **a, t_list **b, t_bench *bench);

void	adaptive_sort(t_list **a, t_list **b, t_bench *bench);

void	sort_three(t_list **a, t_bench *bench);
/* bench */

void	print_bench(t_bench *bench, double disorder);

/* main helpers */

int		check_number(t_list *a, char *str);
int		get_strategy(char *arg, int *strategy, t_bench *bench);
void	sort_stack(t_list **a, t_list **b, t_bench *bench, int strategy);

#endif