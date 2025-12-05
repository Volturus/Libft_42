/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:21:16 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/24 17:21:45 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/* #include <stdio.h>
#include <string.h>

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
	printf("%s ", (char*)b->content);
	printf("%p\n", (int*)b->next);
	printf("%s ", (char*)c->content);
	printf("%p\n", (int*)c->next);

	ft_lstclear(&a, del);
	
	printf("After : %s ", "supprime"); // a, b et c->content seg fault
	printf("%p\n", (int*)a->next);
	printf("%s ", "supprime");
	printf("%p\n", (int*)b->next); 
	printf("%s ", "supprime");
	printf("%p\n", (int*)c->next);
}  */