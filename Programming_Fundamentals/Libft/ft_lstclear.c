/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:08:22 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:00 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
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

	printf("%s \n %s \n %s \n", (char *)first->content, 
		(char *)first->next->content, (char *)second->next->content);
	
	ft_lstclear(&second, del);
	printf("%s \n", (char *)first->content);
//	printf("%s \n", (char *)second->content);
	printf("%s \n", (char *)third->content);
//	printf("%s \n", (char *)third->content);
//	printf("%s \n", (char *)first->next->content);
	return (0);
}*/