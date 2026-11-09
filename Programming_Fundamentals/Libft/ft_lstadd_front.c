/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:56:37 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:01:56 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*new;

	head = ft_lstnew("head");
	first = ft_lstnew("first");
	head->next = first;
	new = ft_lstnew("new");

	ft_lstadd_front(&head, new);
	printf("%s \n", (char *)new->content);
	new = new->next;
	printf("%s \n", (char *)new->content);
	head = head->next;
	printf("%s \n", (char *)head->content);

	return (0);
}*/