/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:09:32 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/01 16:02:10 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
char	*to(char* c)
{
	int i;
	for (i = 0; c[i] != '\0'; i++)
		if (c[i] >= 97 && c[i] <= 122)
			c[i]-= 32;
	return (c);
}

void	ft(void *cnt)
{
	to((char *) cnt);
}

int	main(void)
{
	t_list	*a = ft_lstnew(ft_strdup("a"));
	t_list	*b = ft_lstnew(ft_strdup("b"));
	t_list	*c = ft_lstnew(ft_strdup("c"));

	a->next = b;
	b->next = c;
	ft_lstiter(a, ft);
	printf("%s %s %s \n", (char *)a->content,
		(char *)b->content, (char *)c->content);
	return (0);
}*/