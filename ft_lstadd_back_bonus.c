/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:08:58 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/24 18:03:59 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = tmp;
}

/* #include <stdio.h>

int main()
{
	t_list *a = ft_lstnew((void*)"char");
	t_list *b = ft_lstnew((void*)"tot");
	t_list *c = ft_lstnew((void*)"arr");
	a->next = b;
	
	printf("Before : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)(a->next)->content);
	printf("%p\n", (int*)(a->next)->next);
	
	ft_lstadd_back(&a, c);
	
	printf("After : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)(a->next)->content);
	printf("%p\n", (int*)(a->next)->next);
	printf("%s ", (char*)((a->next)->next)->content);
	printf("%p\n", (int*)((a->next)->next)->next);
} */