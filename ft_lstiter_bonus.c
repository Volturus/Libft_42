/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:25:13 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:45:57 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>

void f (void *content)
{
	content = &content[1];
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
	
	ft_lstiter(a, f);
	
	printf("After : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)(a->next)->content);
	printf("%p\n", (int*)(a->next)->next);
	printf("%s ", (char*)((a->next)->next)->content);
	printf("%p\n", (int*)((a->next)->next)->next);
}   */