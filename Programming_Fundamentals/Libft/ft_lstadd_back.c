/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:50:18 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:01:53 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
/*
int	main(void)
{

	t_list	*first = ft_lstnew("first");
	t_list	*second = ft_lstnew("second");
	t_list	*third = ft_lstnew("third");

	first->next = second;

	ft_lstadd_back(&first, third);
	printf("%s \n", (char *)ft_lstlast(first)->content);
	return (0);
}*/