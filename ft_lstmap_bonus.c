/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:29:15 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/12 16:09:10 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_start;
	t_list	*new;

	if (lst == NULL || f == NULL || !del)
		return (NULL);
	new_start = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst->next != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new->content == NULL && new->next == NULL)
		{
			ft_lstclear(&new_start, del);
			return (NULL);
		}
		ft_lstadd_back(&new_start, new);
		lst = lst->next;
	}
	new = ft_lstnew(f(lst->content));
	ft_lstadd_back(&new_start, new);
	return (new_start);
}

/*#include <stdio.h>

void *f(void *content)
{
	return (&content[1]);
}
void del(void *content)
{
	content = NULL;
}

int main()
{
	t_list *a = ft_lstnew((void*)"char");
	t_list *b = ft_lstnew((void*)"tot");
	t_list *c = ft_lstnew((void*)"arr");
	a->next = b;
	b->next = c;
	
	printf("Before : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)(a->next)->content);
	printf("%p\n", (int*)(a->next)->next);
	printf("%s ", (char*)((a->next)->next)->content);
	printf("%p\n", (int*)((a->next)->next)->next);
	
	t_list *new = ft_lstmap(a, f, del);
	
	printf("After : %s ", (char*)new->content);
	printf("%p\n", (int*)new->next);
	printf("%s ", (char*)(new->next)->content);
	printf("%p\n", (int*)(new->next)->next);
	printf("%s ", (char*)((new->next)->next)->content);
	printf("%p\n", (int*)((new->next)->next)->next);
}  */