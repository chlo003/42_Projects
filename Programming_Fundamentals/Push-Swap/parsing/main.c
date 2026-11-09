/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdahmoul <bdahmoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:07:01 by bdahmoul          #+#    #+#             */
/*   Updated: 2026/08/02 15:10:19 by bdahmoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_data(t_list **a, t_list **b, t_bench *bench)
{
	*a = NULL;
	*b = NULL;
	*bench = (t_bench){0};
}

int	check_stack(t_list *a)
{
	if (has_duplicate(a))
	{
		write(2, "Error\n", 6);
		free_stack(a);
		return (1);
	}
	return (0);
}

int	fill_stack(t_list **a, char **argv)
{
	long	nb;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (check_number(*a, argv[i]))
			return (1);
		nb = ft_atoi(argv[i]);
		add_number(a, (int)nb);
		i++;
	}
	return (0);
}

void	parse_flags(char ***argv, int *strategy, t_bench *bench)
{
	while ((*argv)[1] && (*argv)[1][0] == '-')
	{
		if (!get_strategy((*argv)[1], strategy, bench))
			break ;
		(*argv)++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_bench	bench;
	int		strategy;
	double	disorder;

	init_data(&a, &b, &bench);
	strategy = ADAPTIVE;
	if (argc < 2)
		return (0);
	parse_flags(&argv, &strategy, &bench);
	if (fill_stack(&a, argv + 1))
		return (1);
	if (check_stack(a))
		return (1);
	disorder = get_disorder(a);
	if (!is_sorted(a))
		sort_stack(&a, &b, &bench, strategy);
	print_bench(&bench, disorder);
	free_stack(a);
	free_stack(b);
	return (0);
}
