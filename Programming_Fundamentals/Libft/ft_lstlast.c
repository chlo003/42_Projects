/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:41:59 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:13 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*first = ft_lstnew("first");
	t_list	*second = ft_lstnew("second");
	t_list	*third = ft_lstnew("third");

	first->next = second;
	second->next = third;
	ft_lstlast(first);
	printf("%s \n", (char *)ft_lstlast(first)->content);
	return (0);
}*/