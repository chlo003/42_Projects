/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:51:12 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:03 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *cnt)
{
	(void) cnt;
}

int	main(void)
{
	t_list	*first = ft_lstnew("first");
	t_list	*second = ft_lstnew("second");
	t_list	*third = ft_lstnew("third");

	first->next = second;
	second->next= third;

	printf("%s %s %s \n", (char *)first->content, 
		(char *)first->next->content, (char *)second->next->content);
	
	ft_lstdelone(first, del);
	printf("%s \n", (char *)third->content);
	printf("%s \n", (char *)first->next->content);
	return (0);
}*/